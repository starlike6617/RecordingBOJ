#include <bits/stdc++.h>
#define endl '\n'
#define mod 1000000007
using ll = long long;
using namespace std;

ll power(ll a, ll b)
{
    ll res = 1;
    while (b > 0)
    {
        if (b % 2 == 1)
        {
            res = (res * a) % mod;
        }
        a = (a * a) % mod;
        b /= 2;
    }
    return res;
}

ll inv(ll n)
{
    return power(n, mod - 2);
}

int main()
{
    int M;
    cin >> M;

    ll res = 0;
    while (M--)
    {
        ll N, S;
        cin >> N >> S;
        res = (res + (S * inv(N)) % mod) % mod;
    }
    cout << res;
}