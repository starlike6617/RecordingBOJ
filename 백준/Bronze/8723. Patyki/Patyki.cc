#include <iostream>
using namespace std;

int main()
{
    int a, b, c;
    cin >> a >> b >> c;

    if (a * a == b * b + c * c || b * b == c * c + a * a || c * c == a * a + b * b)
        cout << 1;
    else if (a == b && b == c)
        cout << 2;
    else
        cout << 0;
}