#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int N;
    cin >> N;

    vector<pair<int, int>> v;
    while (N--)
    {
        int x, y;
        cin >> x >> y;
        v.push_back({x, y});
    }

    sort(v.begin(), v.end());

    int start = v[0].first;
    int end = v[0].second;
    int res = 0;

    for (int i = 1; i < v.size(); i++)
    {
        if (end < v[i].first)
        {
            res += end - start;
            start = v[i].first;
            end = v[i].second;
        }
        else if (v[i].first <= end && end < v[i].second)
        {
            end = v[i].second;
        }
    }

    res += end - start;
    cout << res;
}