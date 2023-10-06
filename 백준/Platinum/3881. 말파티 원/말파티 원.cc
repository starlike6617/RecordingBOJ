#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    while (true)
    {
        double x1, y1, x2, y2, x3, y3;
        cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;

        if (x1 == 0 && y1 == 0 && x2 == 0 && y2 == 0 && x3 == 0 && y3 == 0)
        {
            break;
        }

        double a = hypot(x2 - x3, y2 - y3);
        double b = hypot(x3 - x1, y3 - y1);
        double c = hypot(x1 - x2, y1 - y2);

        double Ix = (a * x1 + b * x2 + c * x3) / (a + b + c);
        double Iy = (a * y1 + b * y2 + c * y3) / (a + b + c);

        double d = hypot(Ix - x1, Iy - y1);
        double e = hypot(Ix - x2, Iy - y2);
        double f = hypot(Ix - x3, Iy - y3);

        double S = abs(x1 * y2 + x2 * y3 + x3 * y1 - y1 * x2 - y2 * x3 - y3 * x1) / 2;
        double r = 2 * S / (a + b + c);
        double s = (a + b + c) / 2;

        double r1 = r * (s - r + d - e - f) / (2 * (s - a));
        double r2 = r * (s - r - d + e - f) / (2 * (s - b));
        double r3 = r * (s - r - d - e + f) / (2 * (s - c));

        cout << fixed;
        cout.precision(6);
        cout << r1 << ' ' << r2 << ' ' << r3 << endl;
    }
}