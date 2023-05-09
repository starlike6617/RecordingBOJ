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

    int dp[N + 1] = {};
    for (int i = 1; i <= N; i++)
    {
        if (i + c[i].T - 1 <= N)
        {
            dp[i + c[i].T - 1] = max(dp[i + c[i].T - 1], dp[i - 1] + c[i].P);
            for (int j = i + c[i].T; j <= N; j++)
                dp[j] = max(dp[j], dp[i + c[i].T - 1]);
        }
    }

    cout << dp[N];
}