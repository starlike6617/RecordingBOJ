#include <iostream>
#define MAX 1000001
using namespace std;

int main()
{
    int N;
    cin >> N;

    int cost[1001][3];
    for (int i = 1; i <= N; i++)
        cin >> cost[i][0] >> cost[i][1] >> cost[i][2];

    int ans = MAX;
    for (int i = 0; i < 3; i++)
    {
        int dp[1001][3];

        for (int j = 0; j < 3; j++)
        {
            if (i == j)
                dp[1][j] = cost[1][i];
            else
                dp[1][j] = MAX;
        }

        for (int j = 2; j <= N; j++)
        {
            dp[j][0] = min(dp[j - 1][1], dp[j - 1][2]) + cost[j][0];
            dp[j][1] = min(dp[j - 1][2], dp[j - 1][0]) + cost[j][1];
            dp[j][2] = min(dp[j - 1][0], dp[j - 1][1]) + cost[j][2];
        }

        for (int j = 0; j < 3; j++)
            if (i != j)
                ans = min(ans, dp[N][j]);
    }

    cout << ans;
}