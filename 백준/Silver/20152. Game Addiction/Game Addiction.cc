#include <iostream>
using namespace std;

int main()
{
    int H, N;
    cin >> H >> N;

    long long dp[31] = {};
    dp[0] = 1;
    dp[1] = 1;

    for (int i = 2; i <= 30; i++)
    {
        for (int j = 0; j < i; j++)
        {
            dp[i] += dp[j] * dp[i - j - 1];
        }
    }

    cout << dp[abs(H - N)];
}