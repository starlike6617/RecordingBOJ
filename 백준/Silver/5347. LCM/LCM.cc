#include <iostream>
#define ll long long
using namespace std;

ll gcd(ll a, ll b)
{
    if (b == 0)
    {
        return a;
    }
    return gcd(b, a % b);
}

ll lcm(ll a, ll b)
{
    return a * b / gcd(a, b);
}

int main()
{
    int n;
    cin >> n;

    while (n--)
    {
        ll a, b;
        cin >> a >> b;

        if (a < b)
        {
            swap(a, b);
        }

        cout << lcm(a, b) << endl;
    }
}