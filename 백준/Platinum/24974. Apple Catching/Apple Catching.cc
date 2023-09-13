#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

class Item
{
public:
    int q, t, x, n;
};

bool cmp(Item a, Item b)
{
    if (a.x - a.t == b.x - b.t)
    {
        return a.q > b.q;
    }
    return a.x - a.t < b.x - b.t;
}

int main()
{
    int N;
    cin >> N;

    Item arr[N];
    for (int i = 0; i < N; i++)
    {
        cin >> arr[i].q >> arr[i].t >> arr[i].x >> arr[i].n;
    }

    sort(arr, arr + N, cmp);

    int cnt = 0;
    map<int, int> apple;
    for (int i = 0; i < N; i++)
    {
        if (arr[i].q == 2)
        {
            apple[arr[i].x + arr[i].t] += arr[i].n;
        }
        else
        {
            int n = arr[i].n;
            while (n)
            {
                auto it = apple.lower_bound(arr[i].x + arr[i].t);

                if (it == apple.end())
                {
                    break;
                }

                if (n >= it->second)
                {
                    n -= it->second;
                    cnt += it->second;
                    apple.erase(it);
                }
                else
                {
                    it->second -= n;
                    cnt += n;
                    break;
                }
            }
        }
    }
    cout << cnt << endl;
}