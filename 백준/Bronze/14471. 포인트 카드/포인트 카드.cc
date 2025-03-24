#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
using pii = pair<int, int>;

int main()
{
    int N, M;
    cin >> N >> M;

    vector<pii> v(M);
    for (int i = 0; i < M; i++)
    {
        cin >> v[i].first >> v[i].second;
    }

    sort(v.begin(), v.end(), greater<pii>());
    v.pop_back();

    int res = 0;
    for (auto it : v)
    {
        if (it.first < N)
        {
            res += N - it.first;
        }
    }

    cout << res;
}