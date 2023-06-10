#include <iostream>
using namespace std;

int main()
{
    double prevTemp;
    cin >> prevTemp;

    while (true)
    {
        double temp;
        cin >> temp;

        if (temp == 999)
            break;

        cout << fixed;
        cout.precision(2);
        cout << temp - prevTemp << endl;

        prevTemp = temp;
    }
}