#include <iostream>
using namespace std;

int main()
{
    int a1, a0, c, n;
    cin >> a1 >> a0 >> c >> n;

    if ((c < a1) || (c == a1 && a0 > 0))
    {
        cout << 0;
    }
    else if ((c - a1) * n >= a0)
    {
        cout << 1;
    }
    else
    {
        cout << 0;
    }
}