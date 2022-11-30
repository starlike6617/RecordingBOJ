#include <iostream>
using namespace std;

int main()
{
    int x, n, a, b;
    cin >> x >> n;
    while (n--)
    {
        cin >> a >> b;
        x -= a * b;
    }
    cout << (x == 0 ? "Yes" : "No");
}