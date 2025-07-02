#include <iostream>
#include <vector>
#define endl '\n'
using namespace std;

int main()
{
    int N;
    cin >> N;

    vector<int> v(N + 1);
    for (int i = 1; i <= N; i++)
    {
        cin >> v[i];
    }

    int dp[301] = {};

    if (N == 1)
    {
        cout << v[1];
        return 0;
    }
    else if (N == 2)
    {
        cout << v[1] + v[2];
        return 0;
    }

    dp[1] = v[1];
    dp[2] = v[1] + v[2];
    dp[3] = max(v[1] + v[3], v[2] + v[3]);

    for (int i = 4; i <= N; i++)
    {
        dp[i] = max(dp[i - 3] + v[i - 1] + v[i], dp[i - 2] + v[i]);
    }

    cout << dp[N];
}