#include <iostream>
using namespace std;

int main()
{
    int Z;
    cin >> Z;

    while (Z--)
    {
        int N, M, L;
        cin >> N >> M >> L;

        N -= M - L + 1;
        int res = N / M;

        if (N % M != 0)
        {
            res++;
        }
        if (L == 1)
        {
            res++;
        }

        cout << res << '\n';
    }
}