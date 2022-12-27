#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int dp[1001];
    dp[1] = 1;
    dp[2] = 3;
    for (int i = 3; i < 1001; i++)
        dp[i] = dp[i - 1] % 10007 + (2 * dp[i - 2]) % 10007;

    cout << dp[n] % 10007;
}