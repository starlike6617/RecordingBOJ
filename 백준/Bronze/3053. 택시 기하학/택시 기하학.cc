#include <iostream>
#define pi 3.14159265358979
using namespace std;

int main()
{
    double R;
    cin >> R;

    cout << fixed;
    cout.precision(6);
    cout << pi * R * R << endl
         << 2 * R * R;
}