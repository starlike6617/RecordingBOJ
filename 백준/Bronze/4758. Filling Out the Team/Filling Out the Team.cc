#include <iostream>
using namespace std;

int main()
{
    while (true)
    {
        double a, b, c;
        cin >> a >> b >> c;

        if (a == 0 && b == 0 && c == 0)
            break;

        bool isW = false, isL = false, isQ = false;

        if (a <= 4.5 && b >= 150 && c >= 200)
        {
            cout << "Wide Receiver ";
            isW = true;
        }
        if (a <= 6.0 && b >= 300 && c >= 500)
        {
            cout << "Lineman ";
            isL = true;
        }
        if (a <= 5.0 && b >= 200 && c >= 300)
        {
            cout << "Quarterback ";
            isQ = true;
        }
        if (!isW && !isL && !isQ)
            cout << "No positions";
        cout << endl;
    }
}