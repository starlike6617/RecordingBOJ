#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

int main()
{
    char c;
    cin >> c;

    string s = "ILOVEYONSEI";
    int res = abs(c - 'I');
    for (int i = 0; i < s.size() - 1; i++)
    {
        res += abs(s[i] - s[i + 1]);
    }

    cout << res;
}