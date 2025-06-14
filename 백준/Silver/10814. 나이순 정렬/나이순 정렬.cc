#include <iostream>
#include <vector>
#include <algorithm>
#define endl '\n'
using namespace std;

int main()
{
    int N;
    cin >> N;

    vector<pair<int, pair<int, string>>> v(N);
    for (int i = 0; i < N; i++)
    {
        cin >> v[i].first >> v[i].second.second;
        v[i].second.first = i;
    }

    sort(v.begin(), v.end());

    for (auto it : v)
    {
        cout << it.first << ' ' << it.second.second << endl;
    }
}