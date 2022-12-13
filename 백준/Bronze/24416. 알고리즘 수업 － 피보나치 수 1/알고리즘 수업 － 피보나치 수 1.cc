#include <iostream>
using namespace std;

int cnt1 = 0, cnt2 = 0;

int fib(int n)
{
    if (n == 1 || n == 2)
    {
        cnt1++;
        return 1;
    }
    return fib(n - 1) + fib(n - 2);
}

int fibonacci(int n)
{
    int f[41];
    f[1] = 1, f[2] = 1;
    for (int i = 3; i <= n; i++)
    {
        cnt2++;
        f[i] = f[i - 1] + f[i - 2];
    }
    return f[n];
}

int main()
{
    int num;
    cin >> num;

    fib(num);
    fibonacci(num);

    cout << cnt1 << ' ' << cnt2;
}