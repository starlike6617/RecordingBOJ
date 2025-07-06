#include <iostream>
using namespace std;

int main()
{
    int N;
    cin >> N;

    int arr[1000][3] = {};
    for (int i = 0; i < N; i++)
    {
        cin >> arr[i][0] >> arr[i][1] >> arr[i][2];
    }

    int dp[1000][3] = {};
    dp[0][0] = arr[0][0];
    dp[0][1] = arr[0][1];
    dp[0][2] = arr[0][2];

    for (int i = 1; i < N; i++)
    {
        dp[i][0] = min(dp[i - 1][1], dp[i - 1][2]) + arr[i][0];
        dp[i][1] = min(dp[i - 1][2], dp[i - 1][0]) + arr[i][1];
        dp[i][2] = min(dp[i - 1][0], dp[i - 1][1]) + arr[i][2];
    }

    cout << min(dp[N - 1][0], min(dp[N - 1][1], dp[N - 1][2]));
}