#include <iostream>
using namespace std;

int main()
{
    int T;
    cin >> T;

    int a = 0, b = 0, c = 0;
    while (T > 0)
    {
        if (T >= 300)
        {
            a += 1;
            T -= 300;
        }
        else if (T >= 60)
        {
            b += 1;
            T -= 60;
        }
        else
        {
            c += 1;
            T -= 10;
        }
    }

    if (T == 0)
        cout << a << ' ' << b << ' ' << c;
    else
        cout << -1;
}