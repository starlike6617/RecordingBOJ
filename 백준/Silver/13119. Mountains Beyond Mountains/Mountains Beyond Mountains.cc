#include <iostream>
#define endl '\n'
using namespace std;

int main()
{
    int N, M, X;
    cin >> N >> M >> X;

    char arr[N][M];
    for (int j = 0; j < M; j++)
    {
        int H;
        cin >> H;

        for (int i = 0; i < N; i++)
        {
            if (i == N - X)
            {
                if (i < N - H)
                    arr[i][j] = '-';
                else
                    arr[i][j] = '*';
            }
            else
            {
                if (i < N - H)
                    arr[i][j] = '.';
                else
                    arr[i][j] = '#';
            }

            if (j % 3 == 2 && N - X < i && i < N - H)
            {
                arr[i][j] = '|';
            }
        }
    }

    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < M; j++)
        {
            cout << arr[i][j];
        }
        cout << endl;
    }
}