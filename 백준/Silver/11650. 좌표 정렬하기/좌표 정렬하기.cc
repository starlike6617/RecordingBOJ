#include <iostream>
#include <vector>
#include <algorithm>
#define endl '\n'
using namespace std;

int main()
{
    int N;
    cin >> N;

    vector<pair<int, int>> v(N);
    for (int i = 0; i < N; i++)
    {
        cin >> v[i].first >> v[i].second;
    }

    sort(v.begin(), v.end());

    for (auto p : v)
    {
        cout << p.first << ' ' << p.second << endl;
    }
}