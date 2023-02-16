#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    n %= 8;

    if (n == 0)
        cout << 2;
    else if (n == 7)
        cout << 3;
    else if (n == 6)
        cout << 4;
    else
        cout << n;
}