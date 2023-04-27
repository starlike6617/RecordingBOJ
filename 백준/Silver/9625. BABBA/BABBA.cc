#include <iostream>
using namespace std;

int main()
{
    int dp[45] = {};
    dp[0] = 0;
    dp[1] = 1;
    for (int i = 2; i <= 45; i++)
        dp[i] = dp[i - 1] + dp[i - 2];

    int K;
    cin >> K;
    cout << dp[K - 1] << ' ' << dp[K];
}