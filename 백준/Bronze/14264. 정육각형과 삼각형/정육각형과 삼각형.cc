#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    double L;
    cin >> L;

    cout << fixed;
    cout.precision(9);
    cout << L * L * sqrt(3) / 4;
}