#include <bits/stdc++.h>
#define endl '\n'
using namespace std;
using P = pair<int, int>;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int N, M;
    cin >> N >> M;

    int arr[N + M + 1];
    set<P> a, b;
    for (int i = 1; i <= N; i++)
    {
        cin >> arr[i];
        a.insert({arr[i], i});
    }
    for (int i = N + 1; i <= N + M; i++)
    {
        cin >> arr[i];
        b.insert({arr[i], i});
    }

    int K;
    cin >> K;

    while (K--)
    {
        char c;
        cin >> c;

        if (c == 'U')
        {
            int x, y;
            cin >> x >> y;
            if (x <= N)
            {
                a.erase({arr[x], x});
                a.insert({y, x});
            }
            else
            {
                b.erase({arr[x], x});
                b.insert({y, x});
            }
            arr[x] = y;
        }
        else
        {
            cout << a.begin()->second << ' ' << b.begin()->second << endl;
        }
    }
}
