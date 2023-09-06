#include <iostream>
#include <queue>
using namespace std;
using P = pair<int, int>;

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
    int N;
    cin >> N;

    priority_queue<P, vector<P>, cmp> pq;
    while (N--)
    {
        int d, w;
        cin >> d >> w;
        pq.push({d, w});
    }

    int cnt = 1;
    priority_queue<int, vector<int>, greater<int>> resPq;

    while (!pq.empty())
    {
        if (cnt <= pq.top().first)
        {
            resPq.push(pq.top().second);
            cnt++;
        }
        else if (resPq.top() < pq.top().second)
        {
            resPq.pop();
            resPq.push(pq.top().second);
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