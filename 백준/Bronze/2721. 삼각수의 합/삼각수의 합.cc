#include <iostream>
using namespace std;

int main()
{
    int T;
    cin >> T;

    while (T--)
    {
        int n;
        cin >> n;

        int res = 0;
        for (int i = 1; i <= n; i++)
            res += i * (i + 1) * (i + 2) / 2;
        cout << res << endl;
    }
}