#include <iostream>
#define mod 1000000000
using namespace std;

long long dp[101][10];
long long res;

int main()
{
    int N;
    cin >> N;

    dp[1][0] = 0;
    for (int i = 1; i <= 9; i++)
        dp[1][i] = 1;

    for (int i = 2; i <= N; i++)
        for (int j = 0; j <= 9; j++)
        {
            if (j == 0)
                dp[i][j] += dp[i - 1][j + 1] % mod;
            else if (j == 9)
                dp[i][j] += dp[i - 1][j - 1] % mod;
            else
            {
                dp[i][j] += dp[i - 1][j + 1] % mod;
                dp[i][j] += dp[i - 1][j - 1] % mod;
            }
        }

    for (int i = 0; i <= 9; i++)
        res += dp[N][i] % mod;
    cout << res % mod;
}