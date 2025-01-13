#include <iostream>
#include <vector>
#define MOD 1000000000
using namespace std;

vector<int> dp(1000001);

int main()
{
    int N;
    cin >> N;

    vector<int> v(20);
    for (int i = 0; i < 20; i++)
    {
        v[i] = (1 << i);
    }

    dp[0] = 1;
    for (int i : v)
    {
        for (int j = i; j <= N; j++)
        {
            dp[j] += dp[j - i] % MOD;
            dp[j] %= MOD;
        }
    }

    cout << dp[N];
}