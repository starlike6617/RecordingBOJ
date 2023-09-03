#include <iostream>
#include <queue>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N, L;
    cin >> N >> L;

    using P = pair<int, int>;
    priority_queue<P, vector<P>, greater<P>> pq;

    for (int i = 0; i < N; i++)
    {
        int A;
        cin >> A;
        pq.push({A, i});

        while (pq.top().second < i - L + 1)
        {
            pq.pop();
        }

        cout << pq.top().first << ' ';
    }
}