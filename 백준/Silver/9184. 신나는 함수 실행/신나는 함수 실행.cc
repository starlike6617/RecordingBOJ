#include <iostream>
using namespace std;

int dp[21][21][21];

int w(int a, int b, int c)
{
    if (a <= 0 || b <= 0 || c <= 0)
        return 1;
    else if (a > 20 || b > 20 || c > 20)
        return w(20, 20, 20);
    else if (dp[a][b][c])
        return dp[a][b][c];
    else if (a < b && b < c)
        return dp[a][b][c] = w(a, b, c - 1) + w(a, b - 1, c - 1) - w(a, b - 1, c);
    else
        return dp[a][b][c] = w(a - 1, b, c) + w(a - 1, b - 1, c) + w(a - 1, b, c - 1) - w(a - 1, b - 1, c - 1);
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    while (1)
    {
        int x, y, z;
        cin >> x >> y >> z;

        if (x == -1 && y == -1 && z == -1)
            break;
        cout << "w(" << x << ", " << y << ", " << z << ") = "
             << w(x, y, z) << '\n';
    }
}