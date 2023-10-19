#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

class Point
{
public:
    int x;
    int y;
};

double dist(Point a, Point b)
{
    return hypot(a.x - b.x, a.y - b.y);
}

int main()
{
    Point p[4];
    for (int i = 0; i < 4; i++)
    {
        cin >> p[i].x >> p[i].y;
    }

    double yuumiToPpl[4];
    for (int i = 1; i < 4; i++)
    {
        yuumiToPpl[i] = dist(p[0], p[i]);
    }

    double ppl1to2 = dist(p[1], p[2]);
    double ppl2to3 = dist(p[2], p[3]);
    double ppl3to1 = dist(p[3], p[1]);

    double res[6];
    res[0] = yuumiToPpl[1] + ppl1to2 + ppl2to3;
    res[1] = yuumiToPpl[1] + ppl3to1 + ppl2to3;
    res[2] = yuumiToPpl[2] + ppl1to2 + ppl3to1;
    res[3] = yuumiToPpl[2] + ppl2to3 + ppl3to1;
    res[4] = yuumiToPpl[3] + ppl3to1 + ppl1to2;
    res[5] = yuumiToPpl[3] + ppl2to3 + ppl1to2;

    sort(res, res + 6);
    cout << (int)res[0];
}