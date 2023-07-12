#include <iostream>
using namespace std;

int main()
{
    int x, k, a;
    cin >> x >> k >> a;

    while (x >= 0)
    {
        x -= k;
        if (x < 0)
        {
            cout << 1;
            break;
        }

        x -= a;
        if (x < 0)
        {
            cout << 0;
            break;
        }
    }
}