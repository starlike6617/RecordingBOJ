#include <iostream>
using namespace std;

int main()
{
    int a, x, b, y, T;
    cin >> a >> x >> b >> y >> T;

    int res1, res2;
    res1 = a + (T > 30 ? (T - 30) * x * 21 : 0);
    res2 = b + (T > 45 ? (T - 45) * y * 21 : 0);
    cout << res1 << ' ' << res2;
}