#include <iostream>
#define mod 14579
using namespace std;

int main()
{
    int a, b;
    cin >> a >> b;

    long long res = 1;
    for (int i = a; i <= b; i++)
    {
        res *= i * (i + 1) / 2;
        res %= mod;
    }
    cout << res;
}