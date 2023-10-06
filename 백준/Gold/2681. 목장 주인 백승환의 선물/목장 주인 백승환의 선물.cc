#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

struct Point
{
    double x;
    double y;
};

struct Line
{
    double a;
    double b;

    Line(Point p1, Point p2)
    {
        a = (p2.y - p1.y) / (p2.x - p1.x);
        b = p1.y - a * p1.x;
    }
};

Point inter(Line l1, Line l2)
{
    double x = (l2.b - l1.b) / (l1.a - l2.a);
    double y = l1.a * x + l1.b;
    return {x, y};
}

double getArea(Point a, Point b, Point c)
{
    return abs(a.x * b.y + b.x * c.y + c.x * a.y - a.y * b.x - b.y * c.x - c.y * a.x) / 2;
}

double dist(Point a, Point b)
{
    return sqrt(pow(b.x - a.x, 2) + pow(b.y - a.y, 2));
}

int main()
{
    int T;
    cin >> T;

    while (T--)
    {
        Point a, b, c, d;
        cin >> b.x >> c.x >> c.y >> d.x >> d.y;

        Point m1, m2, m3, m4;
        m1.x = (a.x + b.x) / 2, m1.y = (a.y + b.y) / 2;
        m2.x = (b.x + c.x) / 2, m2.y = (b.y + c.y) / 2;
        m3.x = (c.x + d.x) / 2, m3.y = (c.y + d.y) / 2;
        m4.x = (d.x + a.x) / 2, m4.y = (d.y + a.y) / 2;

        Line l1(a, m2), l2(b, m3), l3(c, m4), l4(d, m1);
        Point p = inter(l1, l4);
        Point q = inter(l2, l1);
        Point r = inter(l3, l2);
        Point s = inter(l4, l3);

        double area[5];
        area[0] = getArea(a, b, q);
        area[1] = getArea(b, c, r);
        area[2] = getArea(c, d, s);
        area[3] = getArea(d, a, p);
        area[4] = getArea(p, q, r) + getArea(r, s, p);

        double fence = dist(p, q) + dist(q, r) + dist(r, s) + dist(s, p);

        cout << fixed;
        cout.precision(3);

        for (double i : area)
        {
            cout << i << ' ';
        }
        cout << (int)ceil(fence) << endl;
    }
}