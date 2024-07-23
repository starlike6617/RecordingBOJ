#include <iostream>
#include <map>
using namespace std;
typedef long long ll;

int main()
{
    ll N, K;
    cin >> N >> K;

    map<ll, ll> m;
    while (N--)
    {
        ll x, y;
        cin >> x >> y;
        m[K * x - y]++;
    }

    ll cnt = 0;
    for (auto it : m)
    {
        cnt += it.second * (it.second - 1);
    }

    cout << cnt;
}