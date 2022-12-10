#include <iostream>
using namespace std;

int n;

void matrixMulti(long long arr1[5][5], long long arr2[5][5])
{
    long long temp[5][5] = {0,};

    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
        {
            for (int k = 0; k < n; k++)
                temp[i][j] += arr1[i][k] * arr2[k][j];
            temp[i][j] %= 1000;
        }

    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            arr1[i][j] = temp[i][j];
}

int main()
{
    long long b;
    cin >> n >> b;

    long long a[5][5], res[5][5] = {};
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
            cin >> a[i][j];
        res[i][i] = 1; // 행렬곱의 항등원은 단위행렬!!
    }

    while (b > 0)
    {
        if (b % 2 == 1)
            matrixMulti(res, a); // res = (res * a) % 1000;
        matrixMulti(a, a);       // a = (a * a) % 1000;
        b /= 2;
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
            cout << res[i][j] << ' ';
        cout << endl;
    }
}