#include <iostream>
using namespace std;

int main()
{
    int x, y;
    cin >> x >> y;

    int a, b, c, d, q, r;
    a = 100 - x;
    b = 100 - y;
    c = 100 - (a + b);
    d = a * b;
    q = d / 100;
    r = d % 100;

    cout << a << ' ' << b << ' ' << c << ' ' << d << ' ' << q << ' ' << r << endl;
    cout << c + q << ' ' << r;
}