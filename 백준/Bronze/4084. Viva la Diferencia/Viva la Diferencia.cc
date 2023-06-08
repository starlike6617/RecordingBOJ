#include <iostream>
using namespace std;

int main()
{
    while (true)
    {
        int a, b, c, d;
        cin >> a >> b >> c >> d;

        if (a == 0 && b == 0 && c == 0 && d == 0)
            break;

        int cnt = 0;
        while (!(a == b && b == c && c == d))
        {
            int temp1 = abs(a - b);
            int temp2 = abs(b - c);
            int temp3 = abs(c - d);
            int temp4 = abs(d - a);

            a = temp1;
            b = temp2;
            c = temp3;
            d = temp4;

            cnt++;
        }

        cout << cnt << endl;
    }
}