#include <bits/stdc++.h>
using namespace std;
using P = pair<int, int>;

struct cmp
{
    bool operator()(P a, P b)
    {
        if (a.second == b.second)
        {
            return a.first < b.first;
        }
        return a.second > b.second;
    }
};

int main()
{
    int N, T;
    cin >> N >> T;

    priority_queue<P, vector<P>, cmp> pq;
    while (N--)
    {
        int c, t;
        cin >> c >> t;
        pq.push({c, t});
    }

    int time = 0;
    priority_queue<int, vector<int>, greater<int>> resPq;
    while (!pq.empty())
    {
        if (time <= pq.top().second)
        {
            resPq.push(pq.top().first);
            time++;
        }
        else if (resPq.top() < pq.top().first)
        {
            resPq.pop();
            resPq.push(pq.top().first);
        }
        pq.pop();
    }

    int res = 0;
    while (!resPq.empty())
    {
        res += resPq.top();
        resPq.pop();
    }
    cout << res;
}