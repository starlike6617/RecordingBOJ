#include <iostream>
using namespace std;

int main()
{
    int t, h, w, n, a, b;
    cin >> t;

    for (int i = 0; i < t; i++)
    {
        cin >> h >> w >> n;

        a = n % h;
        b = n / h + 1;
        if (a == 0)
        {
            a = h;
            b -= 1;
        }

        cout << a;
        if (b < 10)
            cout << 0;
        cout << b << endl;
    }
}