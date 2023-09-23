#include <bits/stdc++.h>
using namespace std;
using P = pair<int, int>;

int main()
{
    int N;
    cin >> N;

    priority_queue<P, vector<P>, greater<P>> pq;
    while (N--)
    {
        int s, e;
        cin >> s >> e;
        pq.push({e, s});
    }

    int cnt = 0;
    int end = 0;
    while (!pq.empty())
    {
        if (pq.top().second >= end)
        {
            end = pq.top().first;
            cnt++;
        }
        pq.pop();
    }
    cout << cnt;
}