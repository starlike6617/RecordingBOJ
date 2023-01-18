#include <iostream>
#include <vector>
#include <map>
#include <algorithm>
using namespace std;

vector<string> v;
map<string, int> m;

bool cmp(string a, string b)
{
    if (m[a] == m[b] && a.size() == b.size())
        return a < b;
    else if (m[a] == m[b])
        return a.size() > b.size();
    else
        return m[a] > m[b];
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N, M;
    cin >> N >> M;

    while (N--)
    {
        string str;
        cin >> str;

        if (str.size() < M)
            continue;

        if (m.find(str) == m.end())
        {
            m[str] = 1;
            v.push_back(str);
        }
        else
            m[str]++;
    }

    sort(v.begin(), v.end(), cmp);

    for (string s : v)
        cout << s << '\n';
}