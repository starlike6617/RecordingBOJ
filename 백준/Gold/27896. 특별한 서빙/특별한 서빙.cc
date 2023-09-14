#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

int main()
{
    int N, M;
    cin >> N >> M;

    priority_queue<int> pq;
    long long sum = 0, cnt = 0;
    for (int i = 0; i < N; i++)
    {
        int x;
        cin >> x;
        pq.push(x);

        sum += x;
        while (sum >= M)
        {
            sum -= pq.top() * 2;
            pq.pop();
            cnt++;
        }
    }

    cout << cnt << endl;
}