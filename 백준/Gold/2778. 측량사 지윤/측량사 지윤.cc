#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

class Line
{
public:
    double a;
    double b;
    double c;
};

class Point
{
public:
    double x;
    double y;
};

Point inter(Line l1, Line l2)
{
    double x = (l1.b * l2.c - l2.b * l1.c) / (l1.a * l2.b - l2.a * l1.b);
    double y = (l1.b == 0 ? -l2.a / l2.b * x - l2.c / l2.b : -l1.a / l1.b * x - l1.c / l1.b);
    return {x, y};
}

bool isParallel(Line l1, Line l2)
{
    return l1.a * l2.b == l2.a * l1.b;
}

int main()
{
    int T;
    cin >> T;

    while (T--)
    {
        Line l1, l2, l3;
        cin >> l1.a >> l1.b >> l1.c;
        cin >> l2.a >> l2.b >> l2.c;
        cin >> l3.a >> l3.b >> l3.c;

        if (isParallel(l1, l2) || isParallel(l2, l3) || isParallel(l3, l1))
        {
            cout << "0.0000" << endl;
            continue;
        }

        Point p1 = inter(l1, l2);
        Point p2 = inter(l2, l3);
        Point p3 = inter(l3, l1);

        double res = abs(p1.x * p2.y + p2.x * p3.y + p3.x * p1.y - p1.y * p2.x - p2.y * p3.x - p3.y * p1.x) / 2;

        cout << fixed;
        cout.precision(4);
        cout << res << endl;
    }
}