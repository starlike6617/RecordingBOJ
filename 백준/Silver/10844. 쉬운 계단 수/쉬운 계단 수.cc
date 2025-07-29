#include <iostream>
#include <vector>
#include <algorithm>
#define endl '\n'
#define MOD 1000000000
using namespace std;

int main()
{
    int N;
    cin >> N;

    int dp[101][10] = {};

    dp[1][0] = 0;
    for (int i = 1; i <= 9; i++)
    {
        dp[1][i] = 1;
    }

    for (int i = 2; i <= N; i++)
    {
        dp[i][0] = dp[i - 1][1] % MOD;
        dp[i][9] = dp[i - 1][8] % MOD;

        for (int j = 1; j <= 8; j++)
        {
            dp[i][j] = (dp[i - 1][j - 1] + dp[i - 1][j + 1]) % MOD;
        }
    }

    int res = 0;
    for (int i = 0; i <= 9; i++)
    {
        res = (res + dp[N][i]) % MOD;
    }

    cout << res;
}