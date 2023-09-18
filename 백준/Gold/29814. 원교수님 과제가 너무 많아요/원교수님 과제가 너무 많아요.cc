#include <iostream>
#include <queue>
#include <algorithm>
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
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int N, C;
    cin >> N >> C;

    priority_queue<P, vector<P>, cmp> pq;
    while (N--)
    {
        int D, T, P;
        cin >> D >> T >> P;
        pq.push({D - T + 1, P});
    }

    int date = 1;
    priority_queue<int, vector<int>, greater<int>> resPq;

    while (!pq.empty())
    {
        if (date <= pq.top().first)
        {
            resPq.push(pq.top().second);
            date++;
        }
        else if (resPq.top() < pq.top().second)
        {
            resPq.pop();
            resPq.push(pq.top().second);
        }
        pq.pop();
    }

    int size = resPq.size();
    int sum = 0;
    vector<int> v;

    while (!resPq.empty())
    {
        sum += resPq.top();
        v.push_back(resPq.top());
        resPq.pop();
    }

    sort(v.begin(), v.end());

    for (int i : v)
    {
        if (sum - i < C)
        {
            break;
        }
        sum -= i;
        size--;
    }

    if (sum < C)
    {
        cout << "I'm sorry professor Won!" << endl;
    }
    else
    {
        cout << size << endl;
    }
}