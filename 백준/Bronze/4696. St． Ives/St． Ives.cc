#include <iostream>
using namespace std;

int main()
{
    while (1)
    {
        double n, ans;
        cin >> n;

        if (n == 0)
            break;

        ans = 1 + n + n * n + n * n * n + n * n * n * n;

        cout << fixed;
        cout.precision(2);
        cout << ans << endl;
    }
}