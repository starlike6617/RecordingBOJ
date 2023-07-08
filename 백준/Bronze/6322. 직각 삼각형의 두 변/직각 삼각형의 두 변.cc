#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    for (int i = 1;; i++)
    {
        double a, b, c;
        cin >> a >> b >> c;

        if (a == 0 && b == 0 && c == 0)
        {
            break;
        }

        cout << "Triangle #" << i << endl;

        cout << fixed;
        cout.precision(3);

        if (c == -1)
        {
            cout << "c = " << sqrt(a * a + b * b) << endl;
        }
        else if (a >= c || b >= c)
        {
            cout << "Impossible." << endl;
        }
        else if (a == -1)
        {
            cout << "a = " << sqrt(c * c - b * b) << endl;
        }
        else if (b == -1)
        {
            cout << "b = " << sqrt(c * c - a * a) << endl;
        }
        cout << endl;
    }
}