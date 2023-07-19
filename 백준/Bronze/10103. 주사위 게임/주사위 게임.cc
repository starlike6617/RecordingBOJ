#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int res1 = 100, res2 = 100;
    while (n--)
    {
        int a, b;
        cin >> a >> b;

        if (a < b)
        {
            res1 -= b;
        }
        else if (a > b)
        {
            res2 -= a;
        }
    }
    cout << res1 << endl
         << res2;
}