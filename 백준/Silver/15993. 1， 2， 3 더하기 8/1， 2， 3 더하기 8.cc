#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;

    long long dp[100001][2];
    dp[1][0] = 1, dp[1][1] = 0;
    dp[2][0] = 1, dp[2][1] = 1;
    dp[3][0] = 2, dp[3][1] = 2;

    for (int i = 4; i < 100001; i++)
    {
        dp[i][0] = (dp[i - 1][1] + dp[i - 2][1] + dp[i - 3][1]) % 1000000009;
        dp[i][1] = (dp[i - 1][0] + dp[i - 2][0] + dp[i - 3][0]) % 1000000009;
    }

    while (t--)
    {
        int n;
        cin >> n;
        cout << dp[n][0] << ' ' << dp[n][1] << '\n';
    }
}