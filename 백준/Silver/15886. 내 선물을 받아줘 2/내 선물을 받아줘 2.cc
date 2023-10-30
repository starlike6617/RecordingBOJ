#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

int main()
{
    int N;
    string s;
    cin >> N >> s;

    int cnt = 0;
    for (int i = 0; i < s.size() - 1; i++)
    {
        string tmp = s.substr(i, 2);
        if (tmp == "EW")
        {
            cnt++;
        }
    }

    cout << cnt;
}