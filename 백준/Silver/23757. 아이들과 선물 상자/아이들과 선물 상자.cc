#include <iostream>
#include <queue>
using namespace std;

int main()
{
    int N, M;
    cin >> N >> M;

    priority_queue<int> pq;
    while (N--)
    {
        int c;
        cin >> c;
        pq.push(c);
    }

    int w, res = 1;
    while (M--)
    {
        cin >> w;

        if (res)
        {
            if (w <= pq.top())
            {
                pq.push(pq.top() - w);
                pq.pop();
            }
            else
            {
                res = 0;
            }
        }
    }
    cout << res;
}