#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

int main()
{
    int N, M;
    cin >> N >> M;

    vector<int> v(N);
    for (int i = 0; i < N; i++)
    {
        cin >> v[i];
    }

    sort(v.begin(), v.end(), greater<>());

    priority_queue<int, vector<int>, greater<int>> pq;
    for (int i = 0; i < M; i++)
    {
        pq.push(0);
    }

    int res = 0;
    for (int i = 0; i < N; i++)
    {
        int tmp = pq.top() + v[i];
        pq.pop();
        pq.push(tmp);

        res = max(res, tmp);
    }
    cout << res;
}