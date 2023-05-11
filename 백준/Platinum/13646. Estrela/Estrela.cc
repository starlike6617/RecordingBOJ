#include <iostream>
using namespace std;

long long phi(long long n)
{
    long long res = n;
    for (long long i = 2; i * i <= n; i++)
    {
        if (n % i == 0)
        {
            res = res / i * (i - 1);
            while (n % i == 0)
                n /= i;
        }
    }

    if (n > 1)
        res = res / n * (n - 1);

    return res;
}

int main()
{
    int N;
    while (cin >> N)
        cout << phi(N) / 2 << '\n';
}