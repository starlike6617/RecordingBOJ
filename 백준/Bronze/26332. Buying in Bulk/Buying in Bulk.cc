#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    while (n--)
    {
        int c, p;
        cin >> c >> p;
        cout << c << ' ' << p << endl;
        cout << p * c - 2 * (c - 1) << endl;
    }
}