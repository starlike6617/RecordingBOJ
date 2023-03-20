#include <iostream>
#define mod 1234567
using namespace std;

long long dp[1001][10];

int main()
{
    int T;
    cin >> T;

    for (int i = 0; i < 10; i++)
        dp[1][i] = 1;

    for (int i = 2; i <= 1000; i++)
    {
        dp[i][0] = dp[i - 1][7] % mod;
        dp[i][1] = (dp[i - 1][2] % mod + dp[i - 1][4] % mod) % mod;
        dp[i][2] = (dp[i - 1][1] % mod + dp[i - 1][3] % mod + dp[i - 1][5] % mod) % mod;
        dp[i][3] = (dp[i - 1][2] % mod + dp[i - 1][6] % mod) % mod;
        dp[i][4] = (dp[i - 1][1] % mod + dp[i - 1][5] % mod + dp[i - 1][7] % mod) % mod;
        dp[i][5] = (dp[i - 1][2] % mod + dp[i - 1][4] % mod + dp[i - 1][6] + dp[i - 1][8] % mod) % mod;
        dp[i][6] = (dp[i - 1][3] % mod + dp[i - 1][5] % mod + dp[i - 1][9] % mod) % mod;
        dp[i][7] = (dp[i - 1][0] % mod + dp[i - 1][4] % mod + dp[i - 1][8] % mod) % mod;
        dp[i][8] = (dp[i - 1][5] % mod + dp[i - 1][7] % mod + dp[i - 1][9] % mod) % mod;
        dp[i][9] = (dp[i - 1][6] % mod + dp[i - 1][8] % mod) % mod;
    }

    while (T--)
    {
        int N;
        cin >> N;

        long long res = 0;
        for (int i = 0; i < 10; i++)
            res = (res + dp[N][i]) % mod;
        res %= mod;

        cout << res << endl;
    }
}