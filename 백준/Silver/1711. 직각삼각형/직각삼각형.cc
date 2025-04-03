#include <iostream>
#include <vector>
#include <algorithm>
#define endl '\n'
using namespace std;
using pll = pair<long long, long long>;

long long getSquaredDist(pll a, pll b)
{
    return (a.first - b.first) * (a.first - b.first) + (a.second - b.second) * (a.second - b.second);
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int N;
    cin >> N;

    vector<pll> v(N);
    for (int i = 0; i < N; i++)
    {
        cin >> v[i].first >> v[i].second;
    }

    int cnt = 0;
    for (int i = 0; i < N; i++)
    {
        for (int j = i + 1; j < N; j++)
        {
            for (int k = j + 1; k < N; k++)
            {
                long long a = getSquaredDist(v[i], v[j]);
                long long b = getSquaredDist(v[j], v[k]);
                long long c = getSquaredDist(v[k], v[i]);

                if (a + b == c || b + c == a || c + a == b)
                {
                    cnt++;
                }
            }
        }
    }

    cout << cnt;
}