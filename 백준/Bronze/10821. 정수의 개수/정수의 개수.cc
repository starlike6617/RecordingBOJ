#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

int main()
{
    string s;
    cin >> s;

    int cnt = 0;
    for (char c : s)
    {
        if (c == ',')
        {
            cnt++;
        }
    }
    cout << cnt + 1;
}