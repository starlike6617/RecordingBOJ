#include <iostream>
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;

    if (n - m == 14)
        cout << n - 7;
    else if (n - m == -14)
        cout << ((m + 7) % 28 ? (m + 7) % 28 : 28);
    else if (n - m == -15)
        cout << ((m + 7) % 29 ? (m + 7) % 29 : 29);
    else if (n - m == -16)
        cout << ((m + 7) % 30 ? (m + 7) % 30 : 30);
    else if (n - m == -17)
        cout << ((m + 7) % 31 ? (m + 7) % 31 : 31);
}