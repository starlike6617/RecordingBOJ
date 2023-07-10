#include <iostream>
using namespace std;

int main()
{
    while (true)
    {
        int l, w, h, v;
        cin >> l >> w >> h >> v;

        if (l == 0 && w == 0 && h == 0 && v == 0)
        {
            break;
        }

        if (l == 0)
        {
            l = v / (w * h);
        }
        else if (w == 0)
        {
            w = v / (l * h);
        }
        else if (h == 0)
        {
            h = v / (l * w);
        }
        else
        {
            v = l * w * h;
        }

        cout << l << ' ' << w << ' ' << h << ' ' << v << endl;
    }
}