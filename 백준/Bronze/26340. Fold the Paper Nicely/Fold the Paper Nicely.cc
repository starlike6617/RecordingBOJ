#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    while (n--)
    {
        int a, b, c;
        cin >> a >> b >> c;

        cout << "Data set: " << a << ' ' << b << ' ' << c << endl;
        while (c--)
        {
            if (a > b)
                a /= 2;
            else
                b /= 2;
        }
        cout << max(a, b) << ' ' << min(a, b) << endl
             << endl;
    }
}