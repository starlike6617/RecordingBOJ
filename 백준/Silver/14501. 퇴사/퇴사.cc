#include <iostream>
using namespace std;

class Consult
{
public:
    int T;
    int P;
};

int main()
{
    int N;
    cin >> N;

    Consult c[N + 1];
    for (int i = 1; i <= N; i++)
        cin >> c[i].T >> c[i].P;

    int dp[N + 2] = {};
    int maxDp = 0;

    for (int i = N; i >= 1; i--)
    {
        if (i + c[i].T - 1 > N)
            dp[i] = dp[i + 1];
        else
            dp[i] = max(dp[i + 1], dp[i + c[i].T] + c[i].P);
        maxDp = max(maxDp, dp[i]);
    }

    cout << maxDp;
}