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

int main()
{
    string x, y;
    cin >> x >> y;
    cout << bigNumAdd(x, y);
}