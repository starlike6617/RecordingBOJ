#include <iostream>
using namespace std;

int main()
{
    int a, b, c, d;
    cin >> a >> b >> c >> d;

    int res1 = min(a, b) * min(c, d);
    int res2 = min(a, c) * min(b, d);
    int res3 = min(a, d) * min(b, c);

    cout << max(res1, max(res2, res3));
}