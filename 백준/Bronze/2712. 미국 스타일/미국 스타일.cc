#include <iostream>
using namespace std;

int main()
{
    int T;
    cin >> T;

    while (T--)
    {
        double n;
        string unit;
        cin >> n >> unit;

        cout << fixed;
        cout.precision(4);

        if (unit == "kg")
            cout << n * 2.2046 << " lb" << endl;
        else if (unit == "l")
            cout << n * 0.2642 << " g" << endl;
        else if (unit == "lb")
            cout << n * 0.4536 << " kg" << endl;
        else if (unit == "g")
            cout << n * 3.7854 << " l" << endl;
    }
}