#include <iostream>
using namespace std;

int main()
{
    int n, m, k;
    cin >> n >> m;
    int a[n][m];
    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
            cin >> a[i][j];
    cin >> m >> k;
    int b[m][k];
    for (int i = 0; i < m; i++)
        for (int j = 0; j < k; j++)
            cin >> b[i][j];

    int res[n][k] = {};
    for (int x = 0; x < n; x++)
        for (int y = 0; y < k; y++)
            for (int z = 0; z < m; z++)
                res[x][y] += a[x][z] * b[z][y];

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < k; j++)
            cout << res[i][j] << ' ';
        cout << endl;
    }
}