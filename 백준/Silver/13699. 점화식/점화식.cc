#include <iostream>
using namespace std;

long long dp[36];

int main()
{
    dp[0] = 1, dp[1] = 1;
    for (int i = 2; i <= 35; i++)
        for (int j = 0; j < i; j++)
            dp[i] += (dp[j] * dp[i - j - 1]);

    int N;
    cin >> N;
    cout << dp[N];
}