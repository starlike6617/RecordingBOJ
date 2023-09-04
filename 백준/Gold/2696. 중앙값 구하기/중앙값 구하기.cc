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
        int M;
        cin >> M;

        priority_queue<int> maxHeap;
        priority_queue<int, vector<int>, greater<int>> minHeap;

        cout << M / 2 + M % 2 << '\n';

        for (int i = 0; i < M; i++)
        {
            int n;
            cin >> n;

            maxHeap.push(n);
            minHeap.push(maxHeap.top());
            maxHeap.pop();

            if (maxHeap.size() < minHeap.size())
            {
                maxHeap.push(minHeap.top());
                minHeap.pop();
            }

            if (i % 2 == 0)
            {
                cout << maxHeap.top() << ' ';
            }

            if (i % 20 == 19 || i == M - 1)
            {
                cout << '\n';
            }
        }
    }
}