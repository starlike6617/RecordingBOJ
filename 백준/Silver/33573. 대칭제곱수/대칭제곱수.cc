#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#define endl '\n'
using namespace std;
using ll = long long;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int T;
    cin >> T;

    while (T--)
    {
        ll N;
        cin >> N;

        ll i = (ll)sqrt(N);
        if (i * i != N)
        {
            cout << "NO" << endl;
            continue;
        }

        string s = to_string(N);
        reverse(s.begin(), s.end());

        ll M = stoll(s);

        ll j = (ll)sqrt(M);
        if (j * j != M)
        {
            cout << "NO" << endl;
        }
        else
        {
            cout << "YES" << endl;
        }
    }
}