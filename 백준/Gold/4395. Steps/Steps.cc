#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

int main()
{
    int T;
    cin >> T;

    while (T--)
    {
        long long x, y;
        cin >> x >> y;

        if (x == y)
        {
            cout << 0 << endl;
        }
        else
        {
            cout << (long long)(sqrt((y - x) * 4 - 3)) << endl;
        }
    }
}