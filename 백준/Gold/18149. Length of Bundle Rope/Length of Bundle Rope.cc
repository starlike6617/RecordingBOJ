#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

int main()
{
    int T;
    cin >> T;

    while (T--)
    {
        int n;
        cin >> n;

        priority_queue<int, vector<int>, greater<int>> pq;
        while (n--)
        {
            int a;
            cin >> a;
            pq.push(a);
        }

        int res = 0;
        while (pq.size() > 1)
        {
            int tmp = pq.top();
            pq.pop();
            tmp += pq.top();
            pq.pop();

            res += tmp;
            pq.push(tmp);
        }
        cout << res << endl;
    }
}