#include <iostream>
using namespace std;

int cntGugu(int n)
{
    int cnt = 0;
    while (n != 0)
    {
        if (n % 10 == 9)
        {
            cnt++;
        }
        n /= 10;
    }
    return cnt;
}

int main()
{
    int n, m;
    cin >> n >> m;

    int arr[n][m], totalCnt = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> arr[i][j];
            totalCnt += cntGugu(arr[i][j]);
        }
    }

    int maxCnt = 0;
    for (int i = 0; i < n; i++)
    {
        int cnt = 0;
        for (int j = 0; j < m; j++)
        {
            cnt += cntGugu(arr[i][j]);
        }
        maxCnt = max(maxCnt, cnt);
    }
    for (int j = 0; j < m; j++)
    {
        int cnt = 0;
        for (int i = 0; i < n; i++)
        {
            cnt += cntGugu(arr[i][j]);
        }
        maxCnt = max(maxCnt, cnt);
    }

    cout << totalCnt - maxCnt;
}