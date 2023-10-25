#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

bool cmp(string a, string b)
{
    if (a.size() == b.size())
    {
        return a < b;
    }
    return a.size() < b.size();
}

string eraseZero(string s)
{
    bool isZero = true;
    for (char c : s)
    {
        if (c != '0')
        {
            isZero = false;
            break;
        }
    }

    if (isZero)
    {
        return "0";
    }

    int i = 0;
    while (s[i] == '0')
    {
        i++;
    }
    return s.substr(i);
}

int main()
{
    int N;
    cin >> N;

    vector<string> v;
    while (N--)
    {
        string s;
        cin >> s;

        string tmp = "";
        for (int i = 0; i < s.size(); i++)
        {
            if (isdigit(s[i]))
            {
                tmp += s[i];
            }
            else if (isalpha(s[i]) && tmp.size() > 0)
            {
                v.push_back(eraseZero(tmp));
                tmp = "";
            }
        }

        if (tmp.size() > 0)
        {
            v.push_back(eraseZero(tmp));
        }
    }

    sort(v.begin(), v.end(), cmp);

    for (string s : v)
    {
        cout << s << endl;
    }
}