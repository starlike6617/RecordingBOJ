#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n, k;
    cin >> n >> k;

    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    vector<int> dp(k + 1, 10001);
    dp[0] = 0;

    for (int coin : v)
    {
        for (int j = coin; j <= k; j++)
        {
            dp[j] = min(dp[j], dp[j - coin] + 1);
        }
    }

    cout << (dp[k] == 10001 ? -1 : dp[k]);
}