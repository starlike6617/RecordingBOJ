#include <iostream>
#define endl '\n'
using namespace std;

int gcd(int x, int y)
{
    if (y == 0)
    {
        return x;
    }
    return gcd(y, x % y);
}

int lcm(int x, int y)
{
    return x / gcd(x, y) * y;
}

int main()
{
    int T;
    cin >> T;

    while (T--)
    {
        int a, b;
        cin >> a >> b;
        cout << lcm(a, b) << ' ' << gcd(a, b) << endl;
    }
}