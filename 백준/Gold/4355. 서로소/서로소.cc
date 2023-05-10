#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    while (true)
    {
        long long n;
        cin >> n;

        if (n == 0)
            break;
        else if (n == 1)
        {
            cout << 0 << '\n';
            continue;
        }

        long long res = n;
        for (int i = 2; i <= sqrt(n); i++)
        {
            if (n % i == 0)
            {
                res = res / i * (i - 1);
                while (n % i == 0)
                    n /= i;
            }
        }

        if (n > 1)
            res = res / n * (n - 1);

        cout << res << '\n';
    }
}