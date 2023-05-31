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
        cout.precision(2);
        cout << "The height of the triangle is " << a * 2 / b << " units" << endl;
    }
}