#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;

    long long dp[100001][4];
    dp[1][1] = 1, dp[1][2] = 0, dp[1][3] = 0;
    dp[2][1] = 0, dp[2][2] = 1, dp[2][3] = 0;
    dp[3][1] = 1, dp[3][2] = 1, dp[3][3] = 1;

    for (int i = 4; i < 100001; i++)
    {
        dp[i][1] = (dp[i - 1][2] + dp[i - 1][3]) % 1000000009;
        dp[i][2] = (dp[i - 2][1] + dp[i - 2][3]) % 1000000009;
        dp[i][3] = (dp[i - 3][1] + dp[i - 3][2]) % 1000000009;
    }

    while (t--)
    {
        int n;
        cin >> n;
        cout << (dp[n][1] + dp[n][2] + dp[n][3]) % 1000000009 << '\n';
    }
}