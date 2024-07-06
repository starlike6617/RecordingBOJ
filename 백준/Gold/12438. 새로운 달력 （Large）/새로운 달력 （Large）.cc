#include <iostream>
using namespace std;

long long gcd(long long a, long long b)
{
    if (b == 0)
        return a;
    return gcd(b, a % b);
}

int main()
{
    int T;
    cin >> T;

    for (int i = 1; i <= T; i++)
    {
        long long m, d, w;
        cin >> m >> d >> w;

        long long cnt = m * d + w * (m - 1);
        long long r = d % w;

        if (r == 0)
        {
            cnt -= w * (m - 1);
        }
        else
        {
            long long k;
            if (w % r == 0)
                k = w / r;
            else
                k = w / gcd(w, r);

            cnt -= w * (m / k);
            if (m % k == 0)
                cnt += w;
        }

        cout << "Case #" << i << ": ";
        cout << (cnt + w - 1) / w << endl;
    }
}