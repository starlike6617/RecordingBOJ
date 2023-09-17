#include <bits/stdc++.h>
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

ll multi_1(ll n, ll a)
{
    ll res = power(2, n);
    res = (res + ((a - 1) * power(2, n / a)) % mod) % mod;
    res = (res * inv(a)) % mod;
    return res;
}

ll multi_2(ll n, ll a, ll b)
{
    ll res = power(2, n);
    res = (res + ((a - 1) * power(2, n / a)) % mod) % mod;
    res = (res + ((b - 1) * power(2, n / b)) % mod) % mod;
    res = (res + ((a * b - a - b + 1) * power(2, n / (a * b))) % mod) % mod;
    res = (res * inv(a * b)) % mod;
    return res;
}

int main()
{
    ll K;
    cin >> K;

    ll N = 2023 * K;
    ll res = power(2, N);
    res = (res - multi_1(N, 7) + mod) % mod;
    res = (res - multi_1(N, 17) + mod) % mod;
    res = (res + multi_2(N, 7, 17)) % mod;

    cout << res << endl;
}