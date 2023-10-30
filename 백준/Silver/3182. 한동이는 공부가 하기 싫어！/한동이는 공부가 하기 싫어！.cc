#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

int main()
{
    int N;
    cin >> N;

    pair<int, bool> arr[N + 1];
    for (int i = 1; i <= N; i++)
    {
        cin >> arr[i].first;
    }

    int cnt[N + 1] = {};
    for (int i = 1; i <= N; i++)
    {
        for (int j = 1; j <= N; j++)
        {
            arr[j].second = false;
        }

        int idx = i;
        while (cnt[i] <= N)
        {
            if (arr[idx].second)
            {
                break;
            }

            arr[idx].second = true;
            idx = arr[idx].first;
            cnt[i]++;
        }
    }

    int maxCnt = 0;
    int maxIdx = 0;
    for (int i = N; i >= 1; i--)
    {
        if (maxCnt <= cnt[i])
        {
            maxCnt = cnt[i];
            maxIdx = i;
        }
    }

    cout << maxIdx;
}