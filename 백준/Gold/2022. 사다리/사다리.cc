#include <bits/stdc++.h>
using namespace std;

int main()
{
    double x, y, c;
    cin >> x >> y >> c;

    double start = 0;
    double end = min(x, y);
    double mid = (start + end) / 2.0;

    while (end - start > 1e-6)
    {
        mid = (start + end) / 2.0;

        double a = sqrt(x * x - mid * mid);
        double b = sqrt(y * y - mid * mid);
        double h = (a * b) / (a + b);

        h > c ? start = mid : end = mid;
    }

    cout << fixed;
    cout.precision(3);
    cout << mid;
}