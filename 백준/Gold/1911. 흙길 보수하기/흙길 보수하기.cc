#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int N, L;
    cin >> N >> L;

    vector<pair<int, int>> v(N);
    for (int i = 0; i < N; i++)
    {
        cin >> v[i].first >> v[i].second;
        v[i].second--;
    }

    sort(v.begin(), v.end());

    int start = 0;
    int cnt = 0;

    for (auto &p : v)
    {
        start = max(start, p.first);
        while (start <= p.second)
        {
            start += L;
            cnt++;
        }
    }

    cout << cnt;
}