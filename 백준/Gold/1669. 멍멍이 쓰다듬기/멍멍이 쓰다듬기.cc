#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

int main()
{
    long long x, y;
    cin >> x >> y;

    if (x == y)
    {
        cout << 0;
    }
    else
    {
        cout << (long long)(sqrt((y - x) * 4 - 3));
    }
}