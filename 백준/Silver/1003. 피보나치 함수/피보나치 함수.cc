#include <iostream>
#define endl '\n'
using namespace std;

int dp[41][2];

int main()
{
    dp[0][0] = 1;
    dp[0][1] = 0;
    dp[1][0] = 0;
    dp[1][1] = 1;

    for (int i = 2; i <= 40; i++)
    {
        for (int j = 0; j <= 1; j++)
        {
            dp[i][j] = dp[i - 1][j] + dp[i - 2][j];
        }
    }

    int T;
    cin >> T;

    while (T--)
    {
        int N;
        cin >> N;
        cout << dp[N][0] << ' ' << dp[N][1] << endl;
    }
}