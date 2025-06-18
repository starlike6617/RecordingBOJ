#include <iostream>
#include <vector>
#include <algorithm>
#define endl '\n'
using namespace std;

vector<int> dp(1000001, 1000001);

int main()
{
    dp[1] = 0;
    dp[2] = 1;
    dp[3] = 1;

    for (int i = 4; i <= 1000000; i++)
    {
        if (i % 3 == 0)
        {
            dp[i] = min(dp[i], dp[i / 3] + 1);
        }
        if (i % 2 == 0)
        {
            dp[i] = min(dp[i], dp[i / 2] + 1);
        }
        dp[i] = min(dp[i], dp[i - 1] + 1);
    }

    int N;
    cin >> N;

    cout << dp[N];
}