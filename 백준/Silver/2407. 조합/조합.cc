#include <iostream>
#include <algorithm>
using namespace std;

string arr[101][101];

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
        res += sum % 10 + '0';
        sum /= 10;
    }

    reverse(res.begin(), res.end());
    return res;
}

string C(int x, int y)
{
    if (arr[x][y] != "")
        return arr[x][y];

    if (x == y || y == 0)
        return "1";
    else
        return arr[x][y] = bigNumAdd(C(x - 1, y - 1), C(x - 1, y));
}

int main()
{
    int n, m;
    cin >> n >> m;
    cout << C(n, m);
}