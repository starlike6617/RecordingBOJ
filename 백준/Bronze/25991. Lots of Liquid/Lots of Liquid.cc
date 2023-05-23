#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int n;
    cin >> n;

    double res;
    while (n--)
    {
        double c;
        cin >> c;
        res += pow(c, 3);
    }

    cout << fixed;
    cout.precision(6);
    cout << cbrt(res);
}