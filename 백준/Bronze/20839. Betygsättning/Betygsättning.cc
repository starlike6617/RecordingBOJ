#include <iostream>
using namespace std;

int main()
{
    int x, y, z, xp, yp, zp;
    cin >> x >> y >> z >> xp >> yp >> zp;

    if (x <= xp && y <= yp && z <= zp)
        cout << 'A';
    else if ((double)x / 2 <= xp && y <= yp && z <= zp)
        cout << 'B';
    else if (y <= yp && z <= zp)
        cout << 'C';
    else if ((double)y / 2 <= yp && z <= zp)
        cout << 'D';
    else
        cout << 'E';
}