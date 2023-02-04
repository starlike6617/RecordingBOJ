#include <iostream>
using namespace std;

int main()
{
    int a, b;
    cin >> a >> b;

    double x, y;
    x = (double)(a + b) / 2;
    y = (double)(a - b) / 2;

    if (x != (int)x || x < 0 || y < 0)
    {
        cout << -1;
        return 0;
    }

    if (x < y)
        swap(x, y);

    cout << x << ' ' << y;
}