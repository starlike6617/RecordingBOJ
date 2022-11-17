#include <iostream>
using namespace std;

int main()
{
    double a, b, v;
    cin >> a >> b >> v;

    double day = (v - a) / (a - b);
    if ((int)day == day)
        cout << (int)day + 1;
    else
        cout << (int)(day + 1) + 1;
}