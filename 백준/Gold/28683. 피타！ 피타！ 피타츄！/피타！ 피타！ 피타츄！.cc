#include <bits/stdc++.h>
using namespace std;

bool isSquare(long long n)
{
    long long root = sqrt(n);
    return root * root == n;
}

int main()
{
    long long n;
    cin >> n;

    if (isSquare(n))
    {
        cout << -1;
        return 0;
    }

    long long cnt = 0;

    for (long long i = 1; i * i <= n; i++)
    {
        long long x1 = n / i;
        long long x2 = i;

        if (n % i == 0 && x1 % 2 == x2 % 2)
        {
            cnt++;
        }
    }

    for (long long i = 1; i * i <= n; i++)
    {
        if (n - i * i >= i * i && isSquare(n - i * i))
        {
            cnt++;
        }
    }

    cout << cnt;
}