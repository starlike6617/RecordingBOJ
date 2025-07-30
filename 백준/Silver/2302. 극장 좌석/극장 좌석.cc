#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int N, M;
    cin >> N >> M;

    vector<int> v(M + 1);
    for (int i = 0; i < M; i++)
    {
        cin >> v[i];
    }
    v[M] = N + 1;

    int dp[41] = {};
    dp[0] = 1;
    dp[1] = 1;

    for (int i = 2; i <= 40; i++)
    {
        dp[i] = dp[i - 1] + dp[i - 2];
    }

    int res = 1;
    int prev = 0;

    for (int i : v)
    {
        res *= dp[i - prev - 1];
        prev = i;
    }

    cout << res;
}