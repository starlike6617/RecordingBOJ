#include <iostream>
#include <queue>
#define endl '\n'
using namespace std;
using ll = long long;

ll gcd(ll a, ll b)
{
    if (b == 0)
        return a;
    return gcd(b, a % b);
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll N;
    cin >> N;

    ll lcm = 1;
    ll n = N;

    while (n > 0)
    {
        ll temp = n % 10;
        if (temp != 0)
        {
            lcm = lcm / gcd(lcm, temp) * temp;
        }
        n /= 10;
    }

    queue<ll> q;
    q.push(N);

    while (!q.empty())
    {
        ll cur = q.front();
        q.pop();

        if (cur % lcm == 0)
        {
            cout << cur;
            break;
        }

        for (int digit = 0; digit <= 9; digit++)
        {
            q.push(cur * 10 + digit);
        }
    }
}