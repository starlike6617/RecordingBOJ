#include <iostream>
using namespace std;

long long dp[31];

int main()
{
    dp[0] = 1, dp[1] = 1;
    for (int i = 2; i <= 30; i++)
        for (int j = 0; j < i; j++)
            dp[i] += dp[j] * dp[i - j - 1];

    while (true)
    {
        int N;
        cin >> N;

        if (N == 0)
            break;

        cout << dp[N] << endl;
    }
}