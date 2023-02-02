#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    while (n--)
    {
        double d, f, p;
        cin >> d >> f >> p;
        cout << fixed;
        cout.precision(2);
        cout << '$' << d * f * p << endl;
    }
}