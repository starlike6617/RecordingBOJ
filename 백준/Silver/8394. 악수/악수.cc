#include <iostream>
using namespace std;

int dp[10000001][2];

int main()
{
    int n;
    cin >> n;

    dp[1][0] = 1, dp[1][1] = 0;
    dp[2][0] = 1, dp[2][1] = 1;

    for (int i = 3; i <= n; i++)
    {
        dp[i][0] = (dp[i - 1][0] + dp[i - 1][1]) % 10;
        dp[i][1] = dp[i - 1][0];
    }

    cout << (dp[n][0] + dp[n][1]) % 10;
}