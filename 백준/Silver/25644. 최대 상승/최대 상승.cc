#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int N;
    cin >> N;

    vector<int> a(N);
    for (int i = 0; i < N; i++)
    {
        cin >> a[i];
    }

    int maxV = a[N - 1], minV = a[N - 1];
    int res = 0;

    for (int i = N - 1; i >= 0; i--)
    {
        if (a[i] > maxV)
        {
            res = max(res, maxV - minV);
            maxV = minV = a[i];
        }
        else
        {
            minV = min(minV, a[i]);
        }
    }
    res = max(res, maxV - minV);

    cout << res;
}