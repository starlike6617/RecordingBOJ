#include <iostream>
#include <algorithm>
using namespace std;

string bigNumAdd(string a, string b)
{
    long long sum = 0;
    string res;

    while (a.size() || b.size() || sum)
    {
        if (a.size())
        {
            sum += a.back() - '0';
            a.pop_back();
        }
        if (b.size())
        {
            sum += b.back() - '0';
            b.pop_back();
        }
        res.push_back(sum % 10 + '0');
        sum /= 10;
    }

    reverse(res.begin(), res.end());
    return res;
}

void hanoi(int n, int from, int by, int to)
{
    if (n == 1)
        cout << from << ' ' << to << '\n';
    else
    {
        hanoi(n - 1, from, to, by);
        cout << from << ' ' << to << '\n';
        hanoi(n - 1, by, from, to);
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int n;
    cin >> n;

    string cnt = "1";
    for (int i = 0; i < n; i++)
        cnt = bigNumAdd(cnt, cnt);

    int temp = cnt.back() - '0';
    cnt.pop_back();
    cnt.push_back(temp - 1 + '0');
    cout << cnt << '\n';

    if (n <= 20)
        hanoi(n, 1, 2, 3);
}