#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    long long N;
    cin >> N;

    long long sum = 0;
    for (long long i = 0; i < N; i++)
    {
        long long A;
        cin >> A;
        sum += A;
    }
    cout << sum - (N - 1) * N / 2;
}