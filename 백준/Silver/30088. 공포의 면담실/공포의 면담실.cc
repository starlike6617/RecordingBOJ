#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

int main()
{
    int N;
    cin >> N;

    vector<long long> v;
    for (int i = 0; i < N; i++)
    {
        int x;
        cin >> x;

        long long sum = 0;
        while (x--)
        {
            int n;
            cin >> n;
            sum += n;
        }
        v.push_back(sum);
    }

    sort(v.begin(), v.end());

    long long res = 0;
    for (int i = 0; i < N; i++)
    {
        res += v[i] * (N - i);
    }
    cout << res;
}