#include <iostream>
using namespace std;

int main()
{
    int H1, B1, H2, B2;
    cin >> H1 >> B1 >> H2 >> B2;

    int res1 = H1 * 3 + B1;
    int res2 = H2 * 3 + B2;

    if (res1 > res2)
        cout << 1 << ' ' << res1 - res2;
    else if (res1 < res2)
        cout << 2 << ' ' << res2 - res1;
    else
        cout << "NO SCORE";
}