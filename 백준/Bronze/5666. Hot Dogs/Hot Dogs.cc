#include <iostream>
using namespace std;

int main()
{
    double H, P;
    while (cin >> H >> P)
    {
        cout << fixed;
        cout.precision(2);
        cout << H / P << endl;
    }
}