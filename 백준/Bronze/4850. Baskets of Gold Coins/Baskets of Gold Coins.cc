#include <iostream>
using namespace std;

int main()
{
    long long N, w, d, sum;
    while (cin >> N >> w >> d >> sum)
    {
        long long res = (N * (N - 1) / 2 * w - sum) / d;
        if (res == 0)
            cout << N << '\n';
        else
            cout << res << '\n';
    }
}