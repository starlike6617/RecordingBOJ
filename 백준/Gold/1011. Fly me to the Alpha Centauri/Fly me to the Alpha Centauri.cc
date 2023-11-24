#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

int main()
{
    int T;
    cin >> T;

    while (T--)
    {
        /*
        1
        2
        3 3
        4 4
        5 5 5
        6 6 6
        7 7 7 7
        8 8 8 8
        */
        long long x, y;
        cin >> x >> y;
        cout << (long long)(sqrt((y - x) * 4 - 3)) << endl;
    }
}