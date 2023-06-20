#include <iostream>
using namespace std;

int main()
{
    while (true)
    {
        int h1, m1, h2, m2;
        char colon;
        cin >> h1 >> colon >> m1 >> h2 >> colon >> m2;

        if (h1 == 0 && m1 == 0 && h2 == 0 && m2 == 0)
            break;

        int t1 = h1 * 60 + m1;
        int t2 = h2 * 60 + m2;
        int t = t1 + t2;

        int d = t / 60 / 24;
        t %= 60 * 24;
        int h = t / 60;
        int m = t % 60;

        printf("%02d:%02d", h, m);
        if (d > 0)
            printf(" +%d", d);
        cout << endl;
    }
}