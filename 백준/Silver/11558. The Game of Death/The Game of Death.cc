#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

int main()
{
    int T;
    cin >> T;

    while (T--)
    {
        int N;
        cin >> N;

        pair<int, bool> A[N + 1];
        for (int i = 1; i <= N; i++)
        {
            cin >> A[i].first;
            A[i].second = false;
        }

        int idx = 1;
        int cnt = 1;
        while (cnt <= N)
        {
            if (A[idx].first == N)
            {
                cout << cnt;
                break;
            }

            if (A[idx].second)
            {
                cout << 0;
                break;
            }

            A[idx].second = true;
            idx = A[idx].first;

            cnt++;
        }

        if (cnt > N)
        {
            cout << 0;
        }

        cout << endl;
    }
}