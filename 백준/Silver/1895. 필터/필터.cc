#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int R, C;
    cin >> R >> C;

    int I[R][C];
    for (int i = 0; i < R; i++)
        for (int j = 0; j < C; j++)
            cin >> I[i][j];

    int T;
    cin >> T;

    int cnt = 0;
    for (int i = 0; i < R - 2; i++)
        for (int j = 0; j < C - 2; j++)
        {
            int arr[9];
            int idx = 0;

            for (int k = i; k < i + 3; k++)
                for (int l = j; l < j + 3; l++)
                    arr[idx++] = I[k][l];

            sort(arr, arr + 9);

            if (arr[4] >= T)
                cnt++;
        }

    cout << cnt;
}