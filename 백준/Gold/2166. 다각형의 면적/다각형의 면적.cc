#include <iostream>
#include <cmath>
using namespace std;

struct Point
{
    long long x;
    long long y;
};

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N;
    cin >> N;

    Point p[N];
    for (int i = 0; i < N; i++)
        cin >> p[i].x >> p[i].y;

    double ans = 0;
    for (int i = 0; i < N; i++)
    {
        if (i == N - 1)
        {
            ans += p[i].x * p[0].y;
            ans -= p[i].y * p[0].x;
        }
        else
        {
            ans += p[i].x * p[i + 1].y;
            ans -= p[i].y * p[i + 1].x;
        }
    }

    cout << fixed;
    cout.precision(1);
    cout << abs(ans) / 2;
}