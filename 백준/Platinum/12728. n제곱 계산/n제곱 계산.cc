#include <iostream>
#include <cmath>
using namespace std;

class Matrix
{
public:
    int arr[2][2];
};

Matrix matrixMulti(Matrix a, Matrix b)
{
    Matrix result;

    for (int i = 0; i < 2; i++)
        for (int j = 0; j < 2; j++)
        {
            result.arr[i][j] = 0;
            for (int k = 0; k < 2; k++)
            {
                result.arr[i][j] += (a.arr[i][k] * b.arr[k][j]) % 1000 + 1000;
                result.arr[i][j] %= 1000;
            }
        }

    return result;
}

Matrix power(Matrix a, int n)
{
    Matrix result;
    result.arr[0][0] = 1, result.arr[0][1] = 0;
    result.arr[1][0] = 0, result.arr[1][1] = 1;

    while (n > 0)
    {
        if (n % 2 == 1)
            result = matrixMulti(result, a);
        a = matrixMulti(a, a);
        n /= 2;
    }

    return result;
}

int main()
{
    int T;
    cin >> T;

    for (int i = 1; i <= T; i++)
    {
        int n;
        cin >> n;

        Matrix a;
        a.arr[0][0] = 6, a.arr[0][1] = -4;
        a.arr[1][0] = 1, a.arr[1][1] = 0;

        Matrix res = power(a, n - 1);
        int ans = (res.arr[1][0] * 28 + res.arr[1][1] * 6 - 1) % 1000 + 1000;
        ans %= 1000;

        cout << "Case #" << i << ": ";
        printf("%03d\n", ans);
    }
}