#include <iostream>
#define mod 1000000007
using namespace std;

long long dp[5002];

int main()
{
    dp[0] = 1, dp[1] = 1;
    for (int i = 2; i <= 5001; i++)
    {
        for (int j = 0; j < i; j++)
            dp[i] += (dp[j] * dp[i - j - 1]) % mod;
        dp[i] %= mod;
    }

    int T;
    cin >> T;

    while (T--)
    {
        int N;
        cin >> N;
        cout << dp[N + 1] << endl;
    }
}