#include <iostream>
using namespace std;

int main()
{
    int T;
    cin >> T;

    while (T--)
    {
        int N;
        cin >> N;

        int coin[21];
        for (int i = 1; i <= N; i++)
            cin >> coin[i];

        int M;
        cin >> M;

        int dp[10001] = {};
        dp[0] = 1;
        for (int i = 1; i <= N; i++)
            for (int j = coin[i]; j <= M; j++)
                dp[j] += dp[j - coin[i]];

        cout << dp[M] << endl;
    }
}