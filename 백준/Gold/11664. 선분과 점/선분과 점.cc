#include <bits/stdc++.h>
using namespace std;

class Point
{
public:
    double x, y, z;
};

int main()
{
    Point A, B, C;
    cin >> A.x >> A.y >> A.z >> B.x >> B.y >> B.z >> C.x >> C.y >> C.z;

    double start = 0;
    double end = 1;
    double res = 30000;
    while (end - start >= 1e-9)
    {
        double mid1 = (start * 2 + end) / 3;
        double mid2 = (start + end * 2) / 3;

        Point m1 = {A.x + (B.x - A.x) * mid1, A.y + (B.y - A.y) * mid1, A.z + (B.z - A.z) * mid1};
        Point m2 = {A.x + (B.x - A.x) * mid2, A.y + (B.y - A.y) * mid2, A.z + (B.z - A.z) * mid2};

        double dist1 = sqrt((m1.x - C.x) * (m1.x - C.x) + (m1.y - C.y) * (m1.y - C.y) + (m1.z - C.z) * (m1.z - C.z));
        double dist2 = sqrt((m2.x - C.x) * (m2.x - C.x) + (m2.y - C.y) * (m2.y - C.y) + (m2.z - C.z) * (m2.z - C.z));

        if (dist1 < dist2)
        {
            end = mid2;
        }
        else
        {
            start = mid1;
        }

        res = min(res, min(dist1, dist2));
    }

    cout << fixed;
    cout.precision(6);
    cout << res;
}