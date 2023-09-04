#include <iostream>
#include <queue>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N;
    cin >> N;

    using P = pair<int, int>;
    priority_queue<P, vector<P>, greater<P>> pq;

    int A[N];
    for (int i = 0; i < N; i++)
    {
        cin >> A[i];
        pq.push({A[i], i});
    }

    int M;
    cin >> M;

    while (M--)
    {
        int x;
        cin >> x;

        if (x == 1)
        {
            int i, v;
            cin >> i >> v;
            i--;

            A[i] = v;
            pq.push({v, i});
        }
        else
        {
            while (!pq.empty() && A[pq.top().second] != pq.top().first)
            {
                pq.pop();
            }
            cout << pq.top().second + 1 << '\n';
        }
    }
}