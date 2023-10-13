#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

class Point
{
public:
    double x;
    double y;
};

int main()
{
    while (true)
    {
        int n;
        cin >> n;

        if (n == 0)
        {
            break;
        }

        Point p[n];
        for (int i = 0; i < n; i++)
        {
            cin >> p[i].x >> p[i].y;
        }

        double area = 0;
        for (int i = 0; i < n; i++)
        {
            area += (p[i].x * p[(i + 1) % n].y) - (p[i].y * p[(i + 1) % n].x);
        }

        area = abs(area) / 2;
        cout << (int)(area + 0.5) << endl;
    }
}