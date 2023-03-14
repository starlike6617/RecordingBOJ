#include <iostream>
using namespace std;

int main()
{
    int N;
    cin >> N;

    int P[N + 1], dp[N + 1];
    for (int i = 1; i <= N; i++)
    {
        cin >> P[i];
        dp[i] = P[i];
    }

    for (int i = 2; i <= N; i++)
        for (int j = 1; j < i; j++)
            dp[i] = min(dp[i], dp[i - j] + P[j]);

    cout << dp[N];
}