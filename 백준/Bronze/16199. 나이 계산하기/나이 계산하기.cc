#include <iostream>
using namespace std;

int main()
{
    int by, bm, bd, y, m, d;
    cin >> by >> bm >> bd >> y >> m >> d;

    int a1, a2, a3;
    a1 = y - by - 1;
    if (m > bm || (m == bm && d >= bd))
        a1 += 1;
    a2 = y - by + 1;
    a3 = y - by;

    cout << a1 << endl
         << a2 << endl
         << a3;
}