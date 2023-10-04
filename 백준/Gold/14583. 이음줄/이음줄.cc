#include <bits/stdc++.h>
using namespace std;

int main()
{
    double H, V;
    cin >> H >> V;

    double l = hypot(H, V);
    double x = (V + l - H) * (V - l + H) / (2 * V);
    double a = hypot(x, H);

    cout << fixed;
    cout.precision(2);
    cout << a / 2 << ' ' << x * l / a;
}