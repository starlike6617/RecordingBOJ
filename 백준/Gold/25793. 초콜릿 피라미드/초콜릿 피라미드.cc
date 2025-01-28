#include <iostream>
#define endl '\n'
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int T;
    cin >> T;

    while (T--)
    {
        long long R, C;
        cin >> R >> C;

        /*
        (R, C)
        바닥: W = R * C
        사이: D = (R-1) * C + R * (C-1)
        천장: W = (R-1) * (C-1)

        (R-1, C-1)
        ...

        종료 조건: R == 0 || C == 0
        반복 횟수: n = min(R, C)

        W = n * (n + 1) * (2 * n + 1) / 3 - n * (n + 1) * (R + C + 1) + n * (2 * R * C + R + C + 1)
        D = W - n
        */

        long long n = min(R, C);
        long long W = n * (n + 1) * (2 * n + 1) / 3 - n * (n + 1) * (R + C + 1) + n * (2 * R * C + R + C + 1);
        long long D = W - n;

        cout << W << ' ' << D << endl;
    }
}