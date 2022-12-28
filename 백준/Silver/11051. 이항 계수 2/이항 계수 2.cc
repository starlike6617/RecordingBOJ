#include <iostream>
using namespace std;

long long dp[1001][1001];

long long C(int x, int y)
{
    if (dp[x][y] != 0)
        return dp[x][y];

    if (x == y || y == 0)
        return 1;
    else
        return dp[x][y] = C(x - 1, y - 1) % 10007 + C(x - 1, y) % 10007;
}

int main()
{
    int n, m;
    cin >> n >> m;
    cout << C(n, m) % 10007;
}