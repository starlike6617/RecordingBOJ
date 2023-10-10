#include <bits/stdc++.h>
using namespace std;

long long arr[100000];

int main()
{
    long long N;
    cin >> N;

    for (long long i = 0; i < N; i++)
    {
        cin >> arr[i];
    }

    long long start = 0;
    long long end = arr[N - 1];
    long long res = 1e18;

    while (start + 2 < end)
    {
        long long mid1 = (2 * start + end) / 3;
        long long mid2 = (start + 2 * end) / 3;

        long long sum1 = 0;
        long long sum2 = 0;
        for (long long i = 0; i < N; i++)
        {
            sum1 += abs(arr[i] - mid1 * i);
            sum2 += abs(arr[i] - mid2 * i);
        }

        if (sum1 < sum2)
        {
            end = mid2;
        }
        else
        {
            start = mid1;
        }

        res = min(res, min(sum1, sum2));
    }

    for (long long i = start; i <= end; i++)
    {
        long long sum = 0;
        for (long long j = 0; j < N; j++)
        {
            sum += abs(arr[j] - i * j);
        }
        res = min(res, sum);
    }

    cout << res;
}