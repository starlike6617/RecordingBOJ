#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int y;
    cin >> y;

    switch (y)
    {
    case 1996:
    case 1997:
    case 2000:
    case 2007:
    case 2008:
    case 2013:
    case 2018:
        cout << "SPbSU";
        break;

    case 2006:
        cout << "PetrSU, ITMO";
        break;

    default:
        cout << "ITMO";
        break;
    }
}