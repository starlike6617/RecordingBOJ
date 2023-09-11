#include <bits/stdc++.h>
using namespace std;

int main()
{
    int N;
    cin >> N;

    set<string> s;
    int cnt = 0;
    while (N--)
    {
        string str;
        cin >> str;

        if (str == "ENTER")
        {
            cnt += s.size();
            s.clear();
        }
        else
        {
            s.insert(str);
        }
    }

    if (s.size())
    {
        cnt += s.size();
    }

    cout << cnt;
}