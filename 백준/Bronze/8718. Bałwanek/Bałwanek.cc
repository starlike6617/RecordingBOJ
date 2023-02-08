#include <iostream>
using namespace std;

int main()
{
    int x, k;
    cin >> x >> k;

    if (k * 7000 <= x * 1000)
        cout << k * 7000;
    else if (k * 3500 <= x * 1000)
        cout << k * 3500;
    else if (k * 1750 <= x * 1000)
        cout << k * 1750;
    else
        cout << 0;
}