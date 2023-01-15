#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;

    long long dp[1001][1001];
    dp[1][1] = 1;
    dp[2][1] = 1, dp[2][2] = 1;
    dp[3][1] = 1, dp[3][2] = 2, dp[3][3] = 1;

    for (int i = 4; i < 1001; i++)
    {
        dp[i][i] = 1;
        for (int j = 1; j < i; j++)
            dp[i][j] = (dp[i - 1][j - 1] + dp[i - 2][j - 1] + dp[i - 3][j - 1]) % 1000000009;
    }

    while (t--)
    {
        int n, m;
        cin >> n >> m;
        cout << dp[n][m] << '\n';
    }
}