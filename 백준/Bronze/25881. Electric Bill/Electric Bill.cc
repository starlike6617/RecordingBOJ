#include <iostream>
using namespace std;

int main()
{
    int a, b;
    cin >> a >> b;

    int n;
    cin >> n;

    while (n--)
    {
        int x;
        cin >> x;

        cout << x << ' ';
        if (x > 1000)
            cout << 1000 * a + (x - 1000) * b;
        else
            cout << x * a;
        cout << endl;
    }
}