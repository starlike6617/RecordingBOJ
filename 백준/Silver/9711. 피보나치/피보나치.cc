#include <iostream>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int T, P, Q;
    cin >> T;

    long long dp[10001];

    for (int i = 0; i < T; i++)
    {
        cin >> P >> Q;

        dp[1] = 1 % Q;
        dp[2] = 1 % Q;

        for (int i = 3; i <= P; i++)
            dp[i] = (dp[i - 1] + dp[i - 2]) % Q;

        cout << "Case #" << i + 1 << ": " << dp[P] << '\n';
    }
}