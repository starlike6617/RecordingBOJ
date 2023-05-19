#include <iostream>
using namespace std;

bool isPrime(long long n)
{
    for (int i = 2; i * i <= n; i++)
        if (n % i == 0)
            return false;
    return true;
}

long long power(long long x, long long y)
{
    long long res = 1;
    long long mod = y;

    while (y > 0)
    {
        if (y % 2 == 1)
            res = (res * x) % mod;
        x = (x * x) % mod;
        y /= 2;
    }

    return res;
}

int main()
{
    while (true)
    {
        long long p, a;
        cin >> p >> a;

        if (p == 0 && a == 0)
            break;

        if (isPrime(p))
            cout << "no" << '\n';
        else if (power(a, p) == a)
            cout << "yes" << '\n';
        else
            cout << "no" << '\n';
    }
}