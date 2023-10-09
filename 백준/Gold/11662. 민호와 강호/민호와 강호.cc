#include <bits/stdc++.h>
using namespace std;

int main()
{
    double Ax, Ay, Bx, By, Cx, Cy, Dx, Dy;
    cin >> Ax >> Ay >> Bx >> By >> Cx >> Cy >> Dx >> Dy;

    double start = 0, end = 100, res = 20000;
    while (end - start >= 1e-6)
    {
        double mid1 = (2 * start + end) / 3;
        double mid2 = (start + 2 * end) / 3;

        double x1 = Ax + (Bx - Ax) * mid1 / 100;
        double y1 = Ay + (By - Ay) * mid1 / 100;
        double x2 = Cx + (Dx - Cx) * mid1 / 100;
        double y2 = Cy + (Dy - Cy) * mid1 / 100;

        double x3 = Ax + (Bx - Ax) * mid2 / 100;
        double y3 = Ay + (By - Ay) * mid2 / 100;
        double x4 = Cx + (Dx - Cx) * mid2 / 100;
        double y4 = Cy + (Dy - Cy) * mid2 / 100;

        double dist1 = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
        double dist2 = sqrt(pow(x4 - x3, 2) + pow(y4 - y3, 2));

        res = min(res, min(dist1, dist2));

        if (dist1 < dist2)
        {
            end = mid2;
        }
        else
        {
            start = mid1;
        }
    }

    cout << fixed;
    cout.precision(6);
    cout << res;
}