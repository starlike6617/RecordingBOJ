#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int arr[500][500];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < i + 1; j++)
        {
            cin >> arr[i][j];
        }
    }

    int dp[500][500] = {};
    dp[0][0] = arr[0][0];

    for (int i = 1; i < n; i++)
    {
        for (int j = 0; j < i + 1; j++)
        {
            if (j == 0)
            {
                dp[i][j] = dp[i - 1][j] + arr[i][j];
            }
            else if (j == i)
            {
                dp[i][j] = dp[i - 1][j - 1] + arr[i][j];
            }
            else
            {
                dp[i][j] = max(dp[i - 1][j], dp[i - 1][j - 1]) + arr[i][j];
            }
        }
    }

    int res = 0;
    for (int j = 0; j < n; j++)
    {
        res = max(res, dp[n - 1][j]);
    }

    cout << res;
}