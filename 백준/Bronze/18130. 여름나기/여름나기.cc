#include <iostream>
#define endl '\n'
using namespace std;
typedef long long ll;

ll maxLL()
{
    ll i = 1;
    return (i << 63) - 1;
}

class Fan
{
public:
    ll p, k, c;
};

int main()
{
    ll N, Q;
    cin >> N >> Q;

    Fan f[N];
    for (int i = 0; i < N; i++)
        cin >> f[i].p >> f[i].k >> f[i].c;

    ll idx = 0, minFee = maxLL();
    for (int i = N - 1; i >= 0; i--)
    {
        ll cnt = (Q + f[i].k - 1) / f[i].k - 1;
        ll fee = f[i].p + (cnt > 0 ? f[i].c * cnt * (cnt + 1) / 2 : 0);

        if (fee <= minFee)
        {
            minFee = fee;
            idx = i + 1;
        }
    }

    cout << idx << ' ' << minFee;
}