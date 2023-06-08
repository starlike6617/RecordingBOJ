#include <iostream>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int n;
    cin >> n;

    int a[n + 1];
    for (int i = 1; i <= n; i++)
        cin >> a[i];

    int m;
    cin >> m;

    while (m--)
    {
        int k, l, r;
        cin >> k >> l >> r;

        if (k == 1)
            for (int i = l; i <= r; i++)
                a[i] = (a[i] * a[i]) % 2010;
        else
        {
            int sum = 0;
            for (int i = l; i <= r; i++)
                sum += a[i];
            cout << sum << '\n';
        }
    }
}