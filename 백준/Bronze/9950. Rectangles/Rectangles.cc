#include <iostream>
using namespace std;

int main()
{
    while (true)
    {
        int l, w, a;
        cin >> l >> w >> a;

        if (l == 0 && w == 0 && a == 0)
        {
            break;
        }

        if (l == 0)
        {
            cout << a / w << ' ' << w << ' ' << a << endl;
        }
        else if (w == 0)
        {
            cout << l << ' ' << a / l << ' ' << a << endl;
        }
        else if (a == 0)
        {
            cout << l << ' ' << w << ' ' << l * w << endl;
        }
    }
}