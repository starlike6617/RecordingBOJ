#include <iostream>
using namespace std;

int arr[301][301];
int sum[301][301];

int main()
{
    int N, M;
    cin >> N >> M;

    for (int i = 1; i <= N; i++)
    {
        for (int j = 1; j <= M; j++)
        {
            cin >> arr[i][j];
            sum[i][j] = arr[i][j] - sum[i - 1][j - 1] + sum[i - 1][j] + sum[i][j - 1];
        }
    }

    int K;
    cin >> K;

    while (K--)
    {
        int i, j, x, y;
        cin >> i >> j >> x >> y;
        cout << sum[x][y] - sum[i - 1][y] - sum[x][j - 1] + sum[i - 1][j - 1] << '\n';
    }
}