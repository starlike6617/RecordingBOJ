#include <iostream>
#define mod 987654321
using namespace std;

long long dp[10001];

int main()
{
    dp[0] = 1, dp[1] = 1;
    for (int i = 2; i <= 10000; i++)
    {
        for (int j = 0; j < i; j++)
            dp[i] += (dp[j] * dp[i - j - 1]) % mod;
        dp[i] %= mod;
    }

    int N;
    cin >> N;
    cout << dp[N / 2];
}