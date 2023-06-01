#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    double a;
    cin >> a;

    cout << fixed;
    cout.precision(6);
    cout << 2 * 3.14159265358979 * sqrt(a / 3.14159265358979);
}