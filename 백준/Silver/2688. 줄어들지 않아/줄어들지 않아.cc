#include <iostream>
using namespace std;

long long dp[1001][10];
long long ans[65];

int main()
{
    for (int i = 0; i <= 9; i++)
        dp[1][i] = 1;

    for (int i = 2; i <= 64; i++)
        for (int j = 0; j <= 9; j++)
            for (int k = 0; k <= j; k++)
                dp[i][j] += dp[i - 1][k];

    for (int i = 0; i <= 64; i++)
        for (int j = 0; j <= 9; j++)
            ans[i] += dp[i][j];

    int T;
    cin >> T;

    while (T--)
    {
        int n;
        cin >> n;
        cout << ans[n] << endl;
    }
}