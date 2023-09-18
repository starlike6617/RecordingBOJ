#include <bits/stdc++.h>
#define endl '\n'
#define MOD 1000000007
using namespace std;
using ll = long long;

ll M[11], D[1000005];

ll power(ll a, ll b)
{
    if (b == 0)
    {
        return 1;
    }

    ll res = power(a, b / 2);
    res = (res * res) % MOD;
    if (b % 2)
    {
        res = (res * a) % MOD;
    }
    return res;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    ll p, c, k;
    cin >> p >> c >> k;

    if (p == 1)
    {
        cout << -1;
        return 0;
    }

    for (int i = 0; i < p; i++)
    {
        cin >> M[i];
        if (i)
        {
            D[i] = M[i] - M[i - 1];
        }
    }

    ll tmp = c;
    for (int i = 1; i < p; i++, tmp *= c)
    {
        D[p] += D[p - i] * tmp;
    }
    D[p] = llabs(D[p]) % MOD;

    ll cnt = 0;
    while (k > p)
    {
        k -= p;
        cnt += p;
    }
    cout << llabs(D[k]) * power(c, cnt) % MOD;
}