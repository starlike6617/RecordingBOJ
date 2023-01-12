#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

bool comp(pair<string, string> a, pair<string, string> b)
{
    if (a.first == b.first)
        return a.second > b.second;
    return a.first < b.first;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N;
    cin >> N;

    vector<pair<string, string>> v(N);
    for (int i = 0; i < N; i++)
        cin >> v[i].first >> v[i].second;

    sort(v.begin(), v.end(), comp);

    for (int i = 0; i < N; i++)
        cout << v[i].first << ' ' << v[i].second << '\n';
}