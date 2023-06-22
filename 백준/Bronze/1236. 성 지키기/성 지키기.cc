#include <iostream>
using namespace std;

int main()
{
    int N, M;
    cin >> N >> M;

    char arr[N][M];
    for (int i = 0; i < N; i++)
        for (int j = 0; j < M; j++)
            cin >> arr[i][j];

    int cntN = N, cntM = M;

    for (int i = 0; i < N; i++)
        for (int j = 0; j < M; j++)
            if (arr[i][j] == 'X')
            {
                cntN--;
                break;
            }

    for (int j = 0; j < M; j++)
        for (int i = 0; i < N; i++)
            if (arr[i][j] == 'X')
            {
                cntM--;
                break;
            }

    cout << max(cntN, cntM);
}