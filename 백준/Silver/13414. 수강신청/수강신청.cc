#include <iostream>
#include <map>
#include <vector>
#include <algorithm>
#define endl '\n'
using namespace std;

bool cmp(pair<string, int> a, pair<string, int> b)
{
    return a.second < b.second;
}

int main()
{
    int K, L;
    cin >> K >> L;

    map<string, int> m;
    for (int i = 0; i < L; i++)
    {
        string s;
        cin >> s;
        m[s] = i;
    }

    vector<pair<string, int>> v(m.begin(), m.end());
    sort(v.begin(), v.end(), cmp);

    for (int i = 0; i < K && i < v.size(); i++)
        cout << v[i].first << endl;
}