#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int Q;
    cin >> Q;

    while (Q--)
    {
        long long a, b;
        cin >> a >> b;

        if (b % a == 0 && b / a >= 2)
            cout << 1 << endl;
        else
            cout << 0 << endl;
    }
}