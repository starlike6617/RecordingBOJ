#include <iostream>
#include <queue>
#define ll long long
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int N;
    cin >> N;

    priority_queue<ll, vector<ll>, greater<ll>> pq;
    while (N--)
    {
        ll num;
        cin >> num;
        pq.push(num);
    }

    ll res = 0;
    while (pq.size() >= 2)
    {
        ll temp = pq.top();
        pq.pop();
        temp += pq.top();
        pq.pop();

        pq.push(temp);
        res += temp;
    }
    cout << res;
}