#include <iostream>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    while (true)
    {
        int n;
        cin >> n;

        if (n == 0)
        {
            break;
        }

        int res = 0;
        int fact[5] = {1, 2, 6, 24, 120};

        for (int i = 0; n > 0; i++)
        {
            res += n % 10 * fact[i];
            n /= 10;
        }
        cout << res << '\n';
    }
}