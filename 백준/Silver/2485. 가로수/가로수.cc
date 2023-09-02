#include <iostream>
using namespace std;

long long gcd(long long a, long long b)
{
    if (b == 0)
    {
        return a;
    }
    return gcd(b, a % b);
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int N;
    cin >> N;

    long long arr[N];
    for (int i = 0; i < N; i++)
    {
        cin >> arr[i];
    }

    long long dist[N - 1];
    for (int i = 0; i < N - 1; i++)
    {
        dist[i] = arr[i + 1] - arr[i];
    }

    long long resGcd = dist[0];
    for (long long i : dist)
    {
        resGcd = gcd(resGcd, i);
    }

    int cnt = 0;
    for (long long i : dist)
    {
        cnt += i / resGcd - 1;
    }
    cout << cnt;
}