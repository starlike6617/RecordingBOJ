#include <iostream>
#include <map>
#include <vector>
#include <algorithm>
using namespace std;

bool comp(pair<string, int> a, pair<string, int> b)
{
    if (a.second == b.second)
        return a.first < b.first;
    return a.second > b.second;
}

int main()
{
    int n;
    cin >> n;

    map<string, int> m;
    while (n--)
    {
        string str;
        cin >> str;
        m[str]++;
    }

    vector<pair<string, int>> v(m.begin(), m.end());
    sort(v.begin(), v.end(), comp);

    cout << v[0].first;
}