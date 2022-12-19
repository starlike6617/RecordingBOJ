#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    while (n--)
    {
        int x1, y1, r1, x2, y2, r2, d;

        cin >> x1 >> y1 >> r1 >> x2 >> y2 >> r2;
        d = (x1 - x2) * (x1 - x2) + (y1 - y2) * (y1 - y2);

        int plus = (r1 + r2) * (r1 + r2);
        int minus = (r1 - r2) * (r1 - r2);

        if (d == 0 && r1 == r2)
            cout << -1 << endl;
        else if (minus < d && d < plus)
            cout << 2 << endl;
        else if (d == plus || d == minus)
            cout << 1 << endl;
        else
            cout << 0 << endl;
    }
}