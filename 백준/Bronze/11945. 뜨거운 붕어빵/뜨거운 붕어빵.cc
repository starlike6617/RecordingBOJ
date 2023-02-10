#include <iostream>
using namespace std;

int main()
{
    int N, M;
    cin >> N >> M;

    int arr[N][M] = {};
    for (int i = 0; i < N; i++)
    {
        string str;
        cin >> str;

        for (int j = 0; j < M; j++)
            if (str[M - j - 1] == '1')
                arr[i][j] = 1;
    }

    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < M; j++)
            cout << arr[i][j];
        cout << endl;
    }
}