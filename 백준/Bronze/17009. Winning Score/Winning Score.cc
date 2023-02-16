#include <iostream>
using namespace std;

int main()
{
    int a3, a2, a1, b3, b2, b1;
    cin >> a3 >> a2 >> a1 >> b3 >> b2 >> b1;

    if (a3 * 3 + a2 * 2 + a1 > b3 * 3 + b2 * 2 + b1)
        cout << 'A';
    else if (a3 * 3 + a2 * 2 + a1 < b3 * 3 + b2 * 2 + b1)
        cout << 'B';
    else
        cout << 'T';
}