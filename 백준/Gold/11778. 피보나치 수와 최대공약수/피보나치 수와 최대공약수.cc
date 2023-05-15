#include <iostream>
#define mod 1000000007
using namespace std;

long long gcd(long long a, long long b)
{
    if (b == 0)
        return a;
    return gcd(b, a % b);
}

void matrixMulti(long long arr1[2][2], long long arr2[2][2])
{
    long long temp[2][2] = {};

    for (int i = 0; i < 2; i++)
        for (int j = 0; j < 2; j++)
        {
            for (int k = 0; k < 2; k++)
                temp[i][j] += arr1[i][k] * arr2[k][j];
            temp[i][j] %= mod;
        }

    for (int i = 0; i < 2; i++)
        for (int j = 0; j < 2; j++)
            arr1[i][j] = temp[i][j];
}

int main()
{
    long long n, m;
    cin >> n >> m;

    long long num = gcd(n, m);
    long long a[2][2] = {{1, 1}, {1, 0}};
    long long res[2][2] = {{1, 0}, {0, 1}};

    while (num > 0)
    {
        if (num % 2 == 1)
            matrixMulti(res, a);
        matrixMulti(a, a);
        num /= 2;
    }

    cout << res[0][1];
}