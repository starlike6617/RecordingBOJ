#include <iostream>
using namespace std;

bool cmpArr(char a[4][4], char b[4][4])
{
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; i < 4; i++)
        {
            if (a[i][j] != b[i][j])
                return false;
        }
    }
    return true;
}

int window(char a[4][4])
{
    char win1[4][4] = {{'.', '.', '.', '.'},
                       {'.', '.', '.', '.'},
                       {'.', '.', '.', '.'},
                       {'.', '.', '.', '.'}};
    char win2[4][4] = {{'*', '*', '*', '*'},
                       {'.', '.', '.', '.'},
                       {'.', '.', '.', '.'},
                       {'.', '.', '.', '.'}};
    char win3[4][4] = {{'*', '*', '*', '*'},
                       {'*', '*', '*', '*'},
                       {'.', '.', '.', '.'},
                       {'.', '.', '.', '.'}};
    char win4[4][4] = {{'*', '*', '*', '*'},
                       {'*', '*', '*', '*'},
                       {'*', '*', '*', '*'},
                       {'.', '.', '.', '.'}};
    char win5[4][4] = {{'*', '*', '*', '*'},
                       {'*', '*', '*', '*'},
                       {'*', '*', '*', '*'},
                       {'*', '*', '*', '*'}};

    if (cmpArr(a, win1))
        return 0;
    else if (cmpArr(a, win2))
        return 1;
    else if (cmpArr(a, win3))
        return 2;
    else if (cmpArr(a, win4))
        return 3;
    else if (cmpArr(a, win5))
        return 4;
}

int main()
{
    int M, N;
    cin >> M >> N;

    char arr[501][501];
    for (int i = 0; i < 5 * M + 1; i++)
    {
        for (int j = 0; j < 5 * N + 1; j++)
        {
            cin >> arr[i][j];
        }
    }

    int res[5] = {};
    for (int i = 0; i < M; i++)
    {
        for (int j = 0; j < N; j++)
        {
            char temp[4][4] = {{arr[5 * i + 1][5 * j + 1], arr[5 * i + 1][5 * j + 2], arr[5 * i + 1][5 * j + 3], arr[5 * i + 1][5 * j + 4]},
                               {arr[5 * i + 2][5 * j + 1], arr[5 * i + 2][5 * j + 2], arr[5 * i + 2][5 * j + 3], arr[5 * i + 2][5 * j + 4]},
                               {arr[5 * i + 3][5 * j + 1], arr[5 * i + 3][5 * j + 2], arr[5 * i + 3][5 * j + 3], arr[5 * i + 3][5 * j + 4]},
                               {arr[5 * i + 4][5 * j + 1], arr[5 * i + 4][5 * j + 2], arr[5 * i + 4][5 * j + 3], arr[5 * i + 4][5 * j + 4]}};
            res[window(temp)]++;
        }
    }

    for (int i : res)
    {
        cout << i << ' ';
    }
}