#include <iostream>
using namespace std;

bool where(int a, int b, int x, int y, int r)
{
    if (r * r < (a - x) * (a - x) + (b - y) * (b - y))
        return true;
    else
        return false;
}

int main()
{
    int T;
    cin >> T;

    while (T--)
    {
        int x1, y1, x2, y2, n, cnt = 0;
        cin >> x1 >> y1 >> x2 >> y2 >> n;

        while (n--)
        {
            int x, y, r;
            cin >> x >> y >> r;

            if (where(x1, y1, x, y, r) != where(x2, y2, x, y, r))
                cnt++;
        }

        cout << cnt << endl;
    }
}