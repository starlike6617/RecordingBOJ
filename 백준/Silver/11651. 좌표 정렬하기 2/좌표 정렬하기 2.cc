#include <iostream>
#include <algorithm>
using namespace std;

class Point
{
public:
    int x;
    int y;
};

bool compare(Point a, Point b)
{
    if (a.y == b.y)
        return a.x < b.x;
    else
        return a.y < b.y;
}

int main()
{
    int n;
    cin >> n;

    Point p[n];
    for (int i = 0; i < n; i++)
        cin >> p[i].x >> p[i].y;

    sort(p, p + n, compare);

    for (int i = 0; i < n; i++)
        cout << p[i].x << ' ' << p[i].y << '\n';
}