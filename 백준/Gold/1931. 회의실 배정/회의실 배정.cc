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
        cin >> v[i].second >> v[i].first; // (end, start)로 입력
    }

    sort(v.begin(), v.end());

    int cnt = 0;
    int endTime = -1;

    for (auto p : v)
    {
        if (endTime <= p.second)
        {
            cnt++;
            endTime = p.first;
        }
    }

    cout << cnt;
}