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
    ios::sync_with_stdio(false);
    cin.tie(), cout.tie();

    string dp[251];
    dp[0] = "1";
    dp[1] = "1";
    for (int i = 2; i < 251; i++)
        dp[i] = bigNumAdd(bigNumAdd(dp[i - 1], dp[i - 2]), dp[i - 2]);

    while (1)
    {
        int n;
        cin >> n;

        if (cin.eof())
            break;

        cout << dp[n] << '\n';
    }
}