#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    if (200 <= n && n <= 205)
        cout << 1;
    else if (206 <= n && n <= 217)
        cout << 2;
    else if (218 <= n && n <= 228)
        cout << 3;
    else
        cout << 4;
}