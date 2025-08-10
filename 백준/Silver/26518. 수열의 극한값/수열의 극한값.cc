#include <iostream>
#include <cmath>
#define endl '\n'
using namespace std;

int main()
{
    double b, c, a1, a2;
    cin >> b >> c >> a1 >> a2;

    cout << fixed;
    cout.precision(9);
    cout << (b + sqrt(b * b + 4 * c)) / 2;
}