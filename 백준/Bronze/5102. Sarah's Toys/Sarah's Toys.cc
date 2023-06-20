#include <iostream>
using namespace std;

int main()
{
    while (true)
    {
        int a, b;
        cin >> a >> b;

        if (a == 0 && b == 0)
            break;

        int n = a - b;
        if (n < 2)
            cout << 0 << ' ' << 0 << endl;
        else if (n % 2 == 0)
            cout << n / 2 << ' ' << 0 << endl;
        else
            cout << (n - 3) / 2 << ' ' << 1 << endl;
    }
}