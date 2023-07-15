#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;

    for (int i = 1; i <= t; i++)
    {
        int n, d;
        cin >> n >> d;

        cout << "Case " << i << ": ";
        if (n / d != 0)
        {
            cout << n / d << ' ';
        }
        if (n % d != 0)
        {
            cout << n % d << '/' << d;
        }
        if (n / d == 0 && n % d == 0)
        {
            cout << 0;
        }
        cout << '\n';
    }
}