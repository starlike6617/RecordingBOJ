#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    long long res = 1;
    for (int i = 1; i <= n; i++)
    {
        res *= i;
        while (res % 10 == 0)
            res /= 10;
        res %= 1000000000000;
    }

    cout.width(5);
    cout.fill('0');
    cout << res % 100000;
}