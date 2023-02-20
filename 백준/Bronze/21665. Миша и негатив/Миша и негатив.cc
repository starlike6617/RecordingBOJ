#include <iostream>
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;

    char img[n][m];
    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
        {
            cin >> img[i][j];
            if (img[i][j] == 'B')
                img[i][j] = 'W';
            else
                img[i][j] = 'B';
        }

    char ref[n][m];
    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
            cin >> ref[i][j];

    int cnt = 0;
    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
            if (img[i][j] != ref[i][j])
                cnt++;

    cout << cnt;
}