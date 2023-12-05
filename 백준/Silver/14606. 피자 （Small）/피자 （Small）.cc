#include <bits/stdc++.h>
using namespace std;

int main()
{
    int N;
    cin >> N;

    int dp[11];
    dp[1] = 0;
    dp[2] = 1;

    for (int i = 3; i < 11; i++)
    {
        if (i % 2 == 0)
        {
            dp[i] = (i / 2) * (i / 2) + dp[i / 2] + dp[i / 2];
        }
        else
        {
            dp[i] = (i / 2) * (i / 2 + 1) + dp[i / 2] + dp[i / 2 + 1];
        }
    }

    cout << dp[N];
}