#include <iostream>
#include <queue>
using namespace std;
using P = pair<int, int>;

struct cmp
{
    bool operator()(P a, P b)
    {
        return a.first - a.second < b.first - b.second;
    }
};

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int N, X;
    cin >> N >> X;

    int res = 0;
    priority_queue<P, vector<P>, cmp> pq;
    while (N--)
    {
        int A, B;
        cin >> A >> B;

        X -= 1000;
        res += B;
        pq.push({A, B});
    }

    while (!pq.empty() && X >= 4000 && pq.top().first > pq.top().second)
    {
        X -= 4000;
        res += pq.top().first - pq.top().second;
        pq.pop();
    }

    cout << res;
}