#include <iostream>
using namespace std;

int memo[15][15] = {};

int dp(int x, int y)
{
    for (int i = 1; i <= 14; i++)
        memo[0][i] = i;

    if (memo[x][y] != 0)
        return memo[x][y];

    int sum = 0;
    for (int i = 1; i <= y; i++)
        sum += dp(x - 1, i);
    return memo[x][y] = sum;
}

int main()
{
    int t;
    cin >> t;

    for (int i = 0; i < t; i++)
    {
        int k, n;
        cin >> k >> n;

        cout << dp(k, n) << endl;
    }
}