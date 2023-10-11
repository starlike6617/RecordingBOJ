#include <bits/stdc++.h>
using namespace std;

int arr[1000];
int dp[1000];

int main()
{
    int N;
    cin >> N;

    for (int i = 0; i < N; i++)
    {
        cin >> arr[i];
        dp[i] = 1;
    }

    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < i; j++)
        {
            if (arr[j] < arr[i] && dp[j] >= dp[i])
            {
                dp[i] = dp[j] + 1;
            }
        }
    }

    int res = 0;
    for (int i = 0; i < N; i++)
    {
        res = max(res, dp[i]);
    }

    cout << res;
}