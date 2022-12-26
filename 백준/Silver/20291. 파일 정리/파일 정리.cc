#include <iostream>
#include <map>
#include <vector>
#include <algorithm>
using namespace std;

bool comp(pair<string, int> a, pair<string, int> b)
{
    return a.first < b.first;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int n;
    cin >> n;

    map<string, int> m;
    for (int i = 0; i < n; i++)
    {
        string str;
        cin >> str;
        m[str.substr(str.find(".") + 1)]++;
    }

    vector<pair<string, int>> v(m.begin(), m.end());
    sort(v.begin(), v.end());

    for (int i = 0; i < v.size(); i++)
        cout << v[i].first << ' ' << v[i].second << '\n';
}