#include <iostream>
using namespace std;

int main()
{
    int N, M;
    cin >> N >> M;

    char arr[50][50];
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < M; j++)
        {
            cin >> arr[i][j];
        }
    }

    int res = 65;
    for (int a = 0; a < N - 7; a++)
    {
        for (int b = 0; b < M - 7; b++)
        {
            int WBcnt = 0, BWcnt = 0;

            for (int i = a; i < a + 8; i++)
            {
                for (int j = b; j < b + 8; j++)
                {
                    if (((i - a) % 2) ^ ((j - b) % 2))
                    {
                        if (arr[i][j] == 'W')
                        {
                            WBcnt++;
                        }
                        else
                        {
                            BWcnt++;
                        }
                    }
                    else
                    {
                        if (arr[i][j] == 'B')
                        {
                            WBcnt++;
                        }
                        else
                        {
                            BWcnt++;
                        }
                    }
                }
            }

            res = min(res, min(WBcnt, BWcnt));
        }
    }

    cout << res;
}