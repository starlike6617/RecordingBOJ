#include <iostream>
using namespace std;

int main()
{
    while (true)
    {
        double x, y;
        cin >> x >> y;

        if (x == 0 && y == 0)
        {
            cout << "AXIS";
            break;
        }
        else if (x == 0 || y == 0)
            cout << "AXIS";
        else if (x > 0 && y > 0)
            cout << "Q1";
        else if (x < 0 && y > 0)
            cout << "Q2";
        else if (x < 0 && y < 0)
            cout << "Q3";
        else if (x > 0 && y < 0)
            cout << "Q4";
        cout << endl;
    }
}