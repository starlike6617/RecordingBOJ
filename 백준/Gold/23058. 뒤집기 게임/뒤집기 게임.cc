#include <iostream>
using namespace std;

int main()
{
    int N;
    cin >> N;

    int arr[8][8], backup[8][8];
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            cin >> arr[i][j];
            backup[i][j] = arr[i][j];
        }
    }

    int res = 81;
    int BITS = 1 << (N + 1);

    for (int xBITS = 0; xBITS < BITS; xBITS++)
    {
        for (int yBITS = 0; yBITS < BITS; yBITS++)
        {
            for (int i = 0; i < N; i++)
            {
                for (int j = 0; j < N; j++)
                {
                    arr[i][j] = backup[i][j];
                }
            }

            int cnt = 0;

            for (int i = 0; i < N; i++)
            {
                if (xBITS & (1 << i))
                {
                    cnt++;
                    for (int j = 0; j < N; j++)
                    {
                        arr[i][j] ^= 1;
                    }
                }
            }
            for (int j = 0; j < N; j++)
            {
                if (yBITS & (1 << j))
                {
                    cnt++;
                    for (int i = 0; i < N; i++)
                    {
                        arr[i][j] ^= 1;
                    }
                }
            }

            int cnt0 = 0, cnt1 = 0;
            for (int i = 0; i < N; i++)
            {
                for (int j = 0; j < N; j++)
                {
                    if (arr[i][j])
                    {
                        cnt1++;
                    }
                    else
                    {
                        cnt0++;
                    }
                }
            }

            cnt += min(cnt0, cnt1);

            res = min(res, cnt);
        }
    }

    cout << res;
}