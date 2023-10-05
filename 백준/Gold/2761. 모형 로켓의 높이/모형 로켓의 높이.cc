#include <bits/stdc++.h>
#define endl '\n'
#define PI 3.14159265358979
using namespace std;

int main()
{
    double D, H;
    cin >> D >> H;

    while (true)
    {
        double a, b, c;
        cin >> a >> b >> c;

        if (a == 0 && b == 0 && c == 0)
        {
            break;
        }

        a = a * PI / 180;
        b = b * PI / 180;
        c = c * PI / 180;

        double A = tan(a) * tan(a);
        double B = tan(b) * tan(b);
        double C = tan(c) * tan(c);

        double h = sqrt(2 * A * B * C * D * D / (A * B + B * C - 2 * C * A)) + H;
        cout << (int)(h + 0.5) << endl;
    }
}