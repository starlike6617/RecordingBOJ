#include <iostream>
using namespace std;

int dp[21][100];

int main()
{
    int N;
    cin >> N;

    int L[N + 1], J[N + 1];
    for (int i = 1; i <= N; i++)
        cin >> L[i];
    for (int i = 1; i <= N; i++)
        cin >> J[i];

    int res = 0;
    for (int i = 1; i <= N; i++)
        for (int j = 1; j <= 99; j++)
        {
            if (L[i] <= j)
                dp[i][j] = max(dp[i - 1][j], dp[i - 1][j - L[i]] + J[i]);
            else
                dp[i][j] = dp[i - 1][j];
        }

    cout << dp[N][99];
}