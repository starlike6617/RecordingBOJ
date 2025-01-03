#include <iostream>
#include <cmath>
#define endl '\n'
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    while (true)
    {
        int N;
        cin >> N;

        if (N == 0)
        {
            break;
        }

        /*
        N = sum(X+1, X+2, ... , X+K) = X * K + K(K+1)/2
        X = (N - K*(K+1)/2) / K : 자연수
        */

        int cnt = 0;
        for (int K = 1; K <= sqrt(2 + 2 * N); K++)
        {
            double x = (N - K * (K + 1.0) / 2.0) / K;

            if (x > 0 && x == (int)x)
            {
                cnt++;
            }
        }

        cout << cnt << endl;
    }
}