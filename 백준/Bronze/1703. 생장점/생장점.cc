#include <iostream>
using namespace std;

int main()
{
    while (true)
    {
        int a;
        cin >> a;

        if (a == 0)
            break;

        int res = 1;
        while (a--)
        {
            int b, c;
            cin >> b >> c;

            res *= b;
            res -= c;
        }

        cout << res << endl;
    }
}