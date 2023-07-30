#include <iostream>
using namespace std;

int main()
{
    int N, X;
    cin >> N >> X;

    int A[N];
    for (int i = 0; i < N; i++)
    {
        cin >> A[i];
    }

    int res = 2000;
    for (int i = 0; i < N - 1; i++)
    {
        res = min(res, A[i] + A[i + 1]);
    }
    cout << res * X;
}