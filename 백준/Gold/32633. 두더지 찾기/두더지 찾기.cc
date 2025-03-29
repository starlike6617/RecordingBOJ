#include <iostream>
#include <vector>
#include <algorithm>
#define endl '\n'
using namespace std;
using ll = long long;

ll gcd(ll a, ll b)
{
    if (b == 0)
        return a;
    return gcd(b, a % b);
}

ll lcm(ll a, ll b, ll L)
{
    return (a / gcd(a, b)) * b;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    ll N, L;
    cin >> N >> L;

    vector<ll> A(N), ones, zeros;
    for (int i = 0; i < N; i++)
    {
        cin >> A[i];
    }
    for (int i = 0; i < N; i++)
    {
        int check;
        cin >> check;

        if (check)
            ones.push_back(A[i]);
        else
            zeros.push_back(A[i]);
    }

    if (!ones.empty())
    {
        sort(ones.begin(), ones.end(), greater<ll>());

        ll res = 1;
        for (int i = 0; i < ones.size(); i++)
        {
            res = lcm(res, ones[i], L);

            if (res > L)
            {
                cout << -1;
                return 0;
            }
        }

        for (int i = 0; i < zeros.size(); i++)
        {
            if (res % zeros[i] == 0)
            {
                cout << -1;
                return 0;
            }
        }

        cout << res;
    }
    else
    {
        for (int i = 0; i < zeros.size(); i++)
        {
            if (zeros[i] == 1)
            {
                cout << -1;
                return 0;
            }
        }
        cout << 1;
    }
}