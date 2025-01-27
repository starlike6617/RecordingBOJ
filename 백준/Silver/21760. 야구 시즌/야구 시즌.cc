#include <iostream>
using namespace std;

int main()
{
    int T;
    cin >> T;

    while (T--)
    {
        int N, M, k, D;
        cin >> N >> M >> k >> D;

        // 다른 지역 = N * mC1 * (n-1)mC1 * B / 2 = N * (N - 1) * M * M * B / 2
        // 같은 지역 = N * mC1 * (m-1)C1 * A / 2 = N * M * (M - 1) * k * B / 2
        // 전체 경기 = B * N * M * ((N - 1) * M + (M - 1) * k) / 2
        int cnt = N * M * ((N - 1) * M + (M - 1) * k) / 2;

        if (D / cnt == 0)
        {
            cout << -1 << endl;
        }
        else
        {
            cout << cnt * (D / cnt) << endl;
        }
    }
}