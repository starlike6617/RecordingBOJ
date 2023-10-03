#include <bits/stdc++.h>
#define PI 3.14159265358979
using namespace std;

int main()
{
    double x1, y1, x2, y2, x3, y3;
    cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;

    double dx = (y1 + y2 + y3) / 3;
    double dy = (x1 + x2 + x3) / 3;
    double S = abs(x1 * y2 + x2 * y3 + x3 * y1 - x2 * y1 - x3 * y2 - x1 * y3) / 2;

    double Vx = 2 * PI * dx * S;
    double Vy = 2 * PI * dy * S;

    cout << fixed;
    cout.precision(6);
    cout << Vx << ' ' << Vy;
}