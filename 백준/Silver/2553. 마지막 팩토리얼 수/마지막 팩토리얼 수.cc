#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    long long res = 1;
    for (int i = 1; i <= n; i++)
    {
        res = (res * i) % 10000000;
        while (res % 10 == 0)
            res /= 10;
    }

    cout << res % 10;
}