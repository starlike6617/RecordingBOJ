#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using P = pair<ll, ll>;

struct cmp
{
    bool operator()(P a, P b)
    {
        if (a.first == b.first)
        {
            return a.second < b.second;
        }
        return a.first > b.first;
    }
};

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int N;
    cin >> N;

    priority_queue<P, vector<P>, cmp> pq;
    while (N--)
    {
        long long D, P;
        cin >> D >> P;
        pq.push({D, P});
    }

    ll day = 1;
    priority_queue<ll, vector<ll>, greater<ll>> resPq;
    while (!pq.empty())
    {
        if (day <= pq.top().first)
        {
            resPq.push(pq.top().second);
            day++;
        }
        else if (resPq.top() < pq.top().second)
        {
            resPq.pop();
            resPq.push(pq.top().second);
        }
        pq.pop();
    }

    ll res = 0;
    while (!resPq.empty())
    {
        res += resPq.top();
        resPq.pop();
    }
    cout << res;
}