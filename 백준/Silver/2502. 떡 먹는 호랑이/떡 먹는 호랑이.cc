#include <iostream>
using namespace std;

int main()
{
    int D, K;
    cin >> D >> K;

    int a[31], b[31];
    a[1] = 1, a[2] = 0;
    b[1] = 0, b[2] = 1;

    for (int i = 3; i <= D; i++)
    {
        a[i] = a[i - 1] + a[i - 2];
        b[i] = b[i - 1] + b[i - 2];
    }

    for (int i = 1; i <= K; i++)
        if ((K - a[D] * i) % b[D] == 0)
        {
            cout << i << endl
                 << (K - a[D] * i) / b[D];
            break;
        }
}