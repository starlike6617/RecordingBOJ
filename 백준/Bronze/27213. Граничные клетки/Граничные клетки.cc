#include <iostream>
using namespace std;

int main()
{
    int m, n;
    cin >> m >> n;

    if (m >= 2 && n >= 2)
        cout << 2 * (m + n - 2);
    else
        cout << m * n;
}