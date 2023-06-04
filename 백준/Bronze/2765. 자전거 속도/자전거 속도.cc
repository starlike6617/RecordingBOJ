#include <iostream>
#define pi 3.141592
using namespace std;

int main()
{
    for (int i = 1;; i++)
    {
        double a, b, c;
        cin >> a >> b >> c;

        if (b == 0)
            break;

        cout << fixed;
        cout.precision(2);

        cout << "Trip #" << i << ": ";
        cout << pi * a * b / 63360 << ' ' << pi * a * b / 63360 / c * 3600 << endl;
    }
}