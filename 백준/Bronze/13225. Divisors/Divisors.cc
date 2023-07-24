#include <iostream>
using namespace std;

int main()
{
    int C;
    cin >> C;

    while (C--)
    {
        int n;
        cin >> n;

        int cnt = 0;
        for (int i = 1; i <= n; i++)
        {
            if (n % i == 0)
            {
                cnt++;
            }
        }

        cout << n << ' ' << cnt << '\n';
    }
}