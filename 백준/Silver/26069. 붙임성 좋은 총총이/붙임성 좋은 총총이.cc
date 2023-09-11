#include <bits/stdc++.h>
using namespace std;

int main()
{
    int N;
    cin >> N;

    map<string, bool> m;
    while (N--)
    {
        string a, b;
        cin >> a >> b;

        if (a == "ChongChong")
        {
            m[a] = true;
        }
        else if (m.find(a) == m.end())
        {
            m[a] = false;
        }
        if (b == "ChongChong")
        {
            m[b] = true;
        }
        else if (m.find(b) == m.end())
        {
            m[b] = false;
        }

        m[a] = m[a] | m[b];
        m[b] = m[a] | m[b];
    }

    int cnt = 0;
    for (auto i : m)
    {
        if (i.second)
        {
            cnt++;
        }
    }
    cout << cnt;
}