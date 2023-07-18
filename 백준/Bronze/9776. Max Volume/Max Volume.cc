#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    double res = 0;
    while (n--)
    {
        char c;
        cin >> c;

        if (c == 'C')
        {
            double r, h;
            cin >> r >> h;
            res = max(res, 3.14159 * r * r * h / 3.0);
        }
        else if (c == 'L')
        {
            double r, h;
            cin >> r >> h;
            res = max(res, 3.14159 * r * r * h);
        }
        else
        {
            double r;
            cin >> r;
            res = max(res, 4.0 / 3.0 * 3.14159 * r * r * r);
        }
    }
    cout << res;
}