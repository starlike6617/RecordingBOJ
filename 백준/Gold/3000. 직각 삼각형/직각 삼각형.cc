#include <bits/stdc++.h>
using namespace std;

pair<int, int> p[100000];
long long x[100001];
long long y[100001];

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int N;
    cin >> N;

    for (int i = 0; i < N; i++)
    {
        int X, Y;
        cin >> X >> Y;

        p[i] = {X, Y};
        x[X]++;
        y[Y]++;
    }

    long long cnt = 0;
    for (int i = 0; i < N; i++)
    {
        cnt += (x[p[i].first] - 1) * (y[p[i].second] - 1);
    }
    cout << cnt;
}