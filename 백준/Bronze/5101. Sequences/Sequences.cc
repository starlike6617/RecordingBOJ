#include <iostream>
using namespace std;

int main()
{
    while (true)
    {
        int a, d, n;
        cin >> a >> d >> n;

        if (a == 0 && d == 0 && n == 0)
            break;

        if ((n - a) % d == 0 && (n - a) / d >= 0)
            cout << (n - a) / d + 1 << endl;
        else
            cout << 'X' << endl;
    }
}