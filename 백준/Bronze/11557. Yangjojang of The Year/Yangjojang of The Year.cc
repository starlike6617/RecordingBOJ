#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool cmp(pair<string, int> a, pair<string, int> b)
{
    return a.second > b.second;
}

int main()
{
    int T;
    cin >> T;

    while (T--)
    {
        int N;
        cin >> N;

        vector<pair<string, int>> v(N);
        for (int i = 0; i < N; i++)
            cin >> v[i].first >> v[i].second;

        sort(v.begin(), v.end(), cmp);
        cout << v[0].first << endl;
    }
}