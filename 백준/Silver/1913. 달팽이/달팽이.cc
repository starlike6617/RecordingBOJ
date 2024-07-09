#include <iostream>
#define endl '\n'
using namespace std;

int main()
{
    int N, M;
    cin >> N >> M;

    int arr[N][N];
    int rDir[4] = {-1, 0, 1, 0};
    int cDir[4] = {0, 1, 0, -1};

    int r = N / 2, c = N / 2;
    int num = 1;
    int idx = 0;
    int cnt = 2;
    int rRes, cRes;

    while (num <= N * N)
    {
        for (int i = 0; i < cnt / 2; i++)
        {
            arr[r][c] = num;

            if (num == M)
            {
                rRes = r;
                cRes = c;
            }

            num++;
            r += rDir[idx];
            c += cDir[idx];
        }

        cnt++;
        idx = (idx + 1) % 4;
    }

    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
            cout << arr[i][j] << ' ';
        cout << endl;
    }

    cout << rRes + 1 << ' ' << cRes + 1;
}