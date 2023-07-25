#include <iostream>
using namespace std;

int main()
{
    int L, R, A;
    cin >> L >> R >> A;

    if (L > R)
    {
        swap(L, R);
    }

    if (L + A <= R)
    {
        cout << (L + A) * 2;
    }
    else
    {
        cout << (R + (A - (R - L)) / 2) * 2;
    }
}