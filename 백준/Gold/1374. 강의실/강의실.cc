#include <bits/stdc++.h>
#define endl '\n'
using namespace std;
using P = pair<int, int>;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int N;
    cin >> N;

    priority_queue<P, vector<P>, greater<P>> pq;
    while (N--)
    {
        int M, S, T;
        cin >> M >> S >> T;
        pq.push({S, T});
    }

    priority_queue<int, vector<int>, greater<int>> res;
    res.push(pq.top().second);
    pq.pop();

    while (!pq.empty())
    {
        if (res.top() <= pq.top().first)
        {
            res.pop();
        }
        res.push(pq.top().second);
        pq.pop();
    }

    cout << res.size();
}