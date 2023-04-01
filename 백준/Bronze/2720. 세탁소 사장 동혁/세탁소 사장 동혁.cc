#include <iostream>
using namespace std;

int main()
{
    int T;
    cin >> T;

    while (T--)
    {
        int C;
        cin >> C;

        int q, d, n, p;

        q = C / 25;
        C %= 25;

        d = C / 10;
        C %= 10;

        n = C / 5;
        C %= 5;

        p = C;

        cout << q << ' ' << d << ' ' << n << ' ' << p << endl;
    }
}