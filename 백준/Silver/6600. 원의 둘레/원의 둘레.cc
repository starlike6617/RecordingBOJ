#include <bits/stdc++.h>
#define endl '\n'
#define PI 3.141592653589793
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    double x1, y1, x2, y2, x3, y3;
    while (cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3)
    {
        double a = hypot(x1 - x2, y1 - y2);
        double b = hypot(x2 - x3, y2 - y3);
        double c = hypot(x3 - x1, y3 - y1);

        double cosA = (b * b + c * c - a * a) / (2 * b * c);
        double sinA = sqrt(1 - cosA * cosA);

        cout << fixed;
        cout.precision(2);

        cout << PI * a / sinA << endl;
    }
}