#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    while (n--)
    {
        double a, b;
        cin >> a >> b;

        cout << fixed;
        cout.precision(1);
        cout << (a < b ? -1 : 1) * (a - b) << endl;
    }
}