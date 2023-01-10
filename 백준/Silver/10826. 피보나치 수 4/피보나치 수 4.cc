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
    cin.tie(NULL), cout.tie(NULL);

    int n;
    cin >> n;

    if (n == 0)
    {
        cout << 0;
        return 0;
    }

    string dp[n + 1];
    dp[0] = "0";
    dp[1] = "1";

    for (int i = 2; i <= n; i++)
        dp[i] = bigNumAdd(dp[i - 1], dp[i - 2]);

    cout << dp[n];
}