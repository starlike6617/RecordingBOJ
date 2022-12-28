#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int dp[31];
    dp[2] = 3;
    dp[4] = 11;

    for (int i = 6; i <= n; i += 2)
        dp[i] = dp[i - 2] * 4 - dp[i - 4];

    if (n % 2 == 1)
        cout << 0;
    else
        cout << dp[n];
}