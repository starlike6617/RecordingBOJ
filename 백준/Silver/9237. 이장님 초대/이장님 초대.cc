#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int N;
    cin >> N;

    int t[N];
    for (int i = 0; i < N; i++)
    {
        cin >> t[i];
    }

    sort(t, t + N, greater<int>());

    int res = 0;
    for (int i = 0; i < N; i++)
    {
        res = max(res, t[i] + i + 2);
    }
    cout << res;
}