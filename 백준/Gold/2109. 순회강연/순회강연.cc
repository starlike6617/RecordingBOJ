#include <iostream>
#include <queue>
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
    int n;
    cin >> n;

    priority_queue<P, vector<P>, cmp> pq;
    while (n--)
    {
        int p, d;
        cin >> p >> d;
        pq.push({p, d});
    }

    int cnt = 1;
    priority_queue<int, vector<int>, greater<int>> resPq;

    while (!pq.empty())
    {
        if (cnt <= pq.top().second)
        {
            resPq.push(pq.top().first);
            cnt++;
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