#include <iostream>
using namespace std;

int main()
{
    int g, p, t;
    cin >> g >> p >> t;

    if (g * p < g + t * p)
        cout << 1;
    else if (g * p > g + t * p)
        cout << 2;
    else
        cout << 0;
}