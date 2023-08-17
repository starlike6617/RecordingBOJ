#include <iostream>
using namespace std;

int main()
{
    while (true)
    {
        int R, C;
        cin >> R >> C;

        if (R == 0 && C == 0)
        {
            break;
        }

        char arr[R][C];
        for (int i = 0; i < R; i++)
        {
            for (int j = 0; j < C; j++)
            {
                cin >> arr[i][j];
            }
        }

        int cnt = 0;
        for (int i = 0; i < R; i++)
        {
            for (int j = 0; j < C; j++)
            {
                if (arr[i][j] == '.')
                {
                    if (i - 1 >= 0 && j - 1 >= 0 && arr[i - 1][j - 1] == '*')
                        cnt++;
                    if (i - 1 >= 0 && arr[i - 1][j] == '*')
                        cnt++;
                    if (i - 1 >= 0 && j + 1 < C && arr[i - 1][j + 1] == '*')
                        cnt++;
                    if (j - 1 >= 0 && arr[i][j - 1] == '*')
                        cnt++;
                    if (j + 1 < C && arr[i][j + 1] == '*')
                        cnt++;
                    if (i + 1 < R && j - 1 >= 0 && arr[i + 1][j - 1] == '*')
                        cnt++;
                    if (i + 1 < R && arr[i + 1][j] == '*')
                        cnt++;
                    if (i + 1 < R && j + 1 < C && arr[i + 1][j + 1] == '*')
                        cnt++;

                    arr[i][j] = (char)(cnt + '0');
                    cnt = 0;
                }
            }
        }

        for (int i = 0; i < R; i++)
        {
            for (int j = 0; j < C; j++)
            {
                cout << arr[i][j];
            }
            cout << endl;
        }
    }
}