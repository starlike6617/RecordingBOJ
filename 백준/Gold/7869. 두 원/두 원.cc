#include <bits/stdc++.h>
#define PI 3.14159265368979
using namespace std;

int main()
{
    double x1, y1, r1, x2, y2, r2;
    cin >> x1 >> y1 >> r1 >> x2 >> y2 >> r2;

    double d = hypot(x1 - x2, y1 - y2);
    double res;

    if (d >= r1 + r2)
    {
        res = 0.000;
    }
    else if (d <= abs(r1 - r2))
    {
        double r = min(r1, r2);
        res = PI * r * r;
    }
    else
    {
        double A = acos((r1 * r1 + d * d - r2 * r2) / (2 * r1 * d));
        double B = acos((r2 * r2 + d * d - r1 * r1) / (2 * r2 * d));
        double S1 = r1 * r1 * A - r1 * r1 * sin(2 * A) / 2;
        double S2 = r2 * r2 * B - r2 * r2 * sin(2 * B) / 2;
        res = S1 + S2;
    }

    cout << fixed;
    cout.precision(3);
    cout << res;
}