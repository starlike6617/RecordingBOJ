#include <iostream>
using namespace std;

int main()
{
    int T;
    cin >> T;

    while (T--)
    {
        int a, b;
        cin >> a >> b;

        int res = 0;

        if (a)
        {
            if (a <= 1)
                res += 5000000;
            else if (a <= 3)
                res += 3000000;
            else if (a <= 6)
                res += 2000000;
            else if (a <= 10)
                res += 500000;
            else if (a <= 15)
                res += 300000;
            else if (a <= 21)
                res += 100000;
        }

        if (b)
        {
            if (b <= 1)
                res += 5120000;
            else if (b <= 3)
                res += 2560000;
            else if (b <= 7)
                res += 1280000;
            else if (b <= 15)
                res += 640000;
            else if (b <= 31)
                res += 320000;
        }

        cout << res << endl;
    }
}