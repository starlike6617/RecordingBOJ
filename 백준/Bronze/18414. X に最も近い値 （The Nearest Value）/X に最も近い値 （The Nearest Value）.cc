#include <iostream>
using namespace std;

int main()
{
    int X, L, R;
    cin >> X >> L >> R;

    if (X <= L)
        cout << L;
    else if (L < X && X < R)
        cout << X;
    else
        cout << R;
}