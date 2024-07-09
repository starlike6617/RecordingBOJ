#include <iostream>
using namespace std;
typedef long long ll;

ll gcd(ll a, ll b)
{
    if (b == 0)
        return a;
    return gcd(b, a % b);
}

int main()
{
    ll x, y;
    cin >> x >> y;

    ll p = x / gcd(x, y);
    ll q = y / gcd(x, y);

    cout << (p + q - 1) * gcd(x, y);
}