#include <iostream>
#include <queue>
#define ll long long
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;

    priority_queue<ll, vector<ll>, greater<ll>> pq;
    while (n--)
    {
        ll num;
        cin >> num;
        pq.push(num);
    }

    while (m--)
    {
        ll a = pq.top();
        pq.pop();
        ll b = pq.top();
        pq.pop();

        pq.push(a + b);
        pq.push(a + b);
    }

    ll res = 0;
    while (!pq.empty())
    {
        res += pq.top();
        pq.pop();
    }
    cout << res;
}