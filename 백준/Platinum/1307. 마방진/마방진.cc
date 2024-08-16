#include <iostream>
#define endl '\n'
using namespace std;

int arr[301][301];
int tmp[151][151];

void NisOdd(int n)
{
    int i = n - 1, j = n / 2;
    for (int num = 1; num <= n * n; num++)
    {
        if (arr[i][j] != 0)
        {
            i = (i - 2 + n) % n;
            j = (j - 1 + n) % n;
        }

        arr[i][j] = num;

        i = (i + 1) % n;
        j = (j + 1) % n;
    }
}

void Nis4k(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if ((i < n / 4 && n / 4 <= j && j < n / 4 * 3) ||
                (n / 4 <= i && i < n / 4 * 3 && j < n / 4) ||
                (n / 4 <= i && i < n / 4 * 3 && n / 4 * 3 <= j) ||
                (n / 4 * 3 <= i && n / 4 <= j && j < n / 4 * 3))
            {
                arr[i][j] = n * n + 1 - (n * i + j + 1);
            }
            else
            {
                arr[i][j] = n * i + j + 1;
            }
        }
    }
}

void NisNot4k(int n)
{
    int m = n / 2;
    int a = m - 1, b = m / 2;
    for (int num = 1; num <= m * m; num++)
    {
        if (tmp[a][b] != 0)
        {
            a = (a - 2 + m) % m;
            b = (b - 1 + m) % m;
        }

        tmp[a][b] = num;

        a = (a + 1) % m;
        b = (b + 1) % m;
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i >= n / 2)
            {
                arr[i][j] = 3 * n * n / 4 - arr[i - n / 2][j];
            }
            else if ((i == n / 4 && 0 < j && j <= n / 4) ||
                     (i != n / 4 && j < n / 4))
            {
                arr[i][j] = 0 * n * n / 4;
            }
            else if (n / 2 <= j && j < n - n / 4 + 1)
            {
                arr[i][j] = 1 * n * n / 4;
            }
            else if (n - n / 4 + 1 <= j)
            {
                arr[i][j] = 2 * n * n / 4;
            }
            else
            {
                arr[i][j] = 3 * n * n / 4;
            }
        }
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            arr[i][j] += tmp[i % m][j % m];
        }
    }
}

int main()
{
    int N;
    cin >> N;

    if (N % 2 == 1)
    {
        NisOdd(N);
    }
    else if (N % 4 == 0)
    {
        Nis4k(N);
    }
    else
    {
        NisNot4k(N);
    }

    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            cout << arr[i][j] << ' ';
        }
        cout << endl;
    }
}