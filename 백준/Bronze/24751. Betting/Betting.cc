#include <iostream>
using namespace std;

int main()
{
    double a;
    cin >> a;
    cout << 1 + (100 - a) / a << endl
         << 1 + a / (100 - a);
}