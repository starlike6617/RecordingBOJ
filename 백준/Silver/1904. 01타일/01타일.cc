#include <iostream>
#define MOD 15746
using namespace std;

int dp[1000001];

int main()
{
    int N;
    cin >> N;

    dp[1] = 1;
    dp[2] = 2;

    for (int i = 3; i <= N; i++)
    {
        dp[i] = (dp[i - 1] + dp[i - 2]) % MOD;
    }

    cout << dp[N];
}