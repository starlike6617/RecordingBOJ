#include <iostream>
using namespace std;

long long dp[1001][1001];

int main()
{
    int t;
    cin >> t;

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

        long long sum = 0;
        for (int i = 1; i <= m; i++)
            sum = (sum + dp[n][i]) % 1000000009;

        cout << sum << '\n';
    }
}