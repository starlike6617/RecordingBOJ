#include <iostream>
#include <queue>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int T;
    cin >> T;

    while (T--)
    {
        int K;
        cin >> K;

        priority_queue<long long, vector<long long>, greater<long long>> pq;
        while (K--)
        {
            long long n;
            cin >> n;
            pq.push(n);
        }

        long long res = 0;
        while (pq.size() != 1)
        {
            long long a = pq.top();
            pq.pop();
            long long b = pq.top();
            pq.pop();

            pq.push(a + b);
            res += a + b;
        }
        cout << res << '\n';
    }
}