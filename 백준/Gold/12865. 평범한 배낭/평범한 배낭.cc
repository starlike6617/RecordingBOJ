#include <iostream>
using namespace std;

int W[101];
int V[101];
int dp[101][100001];

int main()
{
    int N, K;
    cin >> N >> K;
    for (int i = 0; i < N; i++)
        cin >> W[i] >> V[i];

    for (int i = 1; i <= N; i++)
        for (int j = 1; j <= K; j++)
        {
            if (W[i - 1] <= j)
                dp[i][j] = max(dp[i - 1][j], dp[i - 1][j - W[i - 1]] + V[i - 1]);
            else
                dp[i][j] = dp[i - 1][j];
        }

    cout << dp[N][K];
}