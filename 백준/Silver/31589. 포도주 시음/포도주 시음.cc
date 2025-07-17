#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int N, K;
    cin >> N >> K;

    vector<long long> T(N);
    for (int i = 0; i < N; i++)
    {
        cin >> T[i];
    }

    sort(T.begin(), T.end());

    int start = 0, end = N - 1;
    long long res = 0;
    long long prev = 0;

    for (int i = 0; i < K; i++)
    {
        if (i % 2 == 0)
        {
            res += T[end] - prev;
            end--;
        }
        else
        {
            prev = T[start];
            start++;
        }
    }

    cout << res;
}