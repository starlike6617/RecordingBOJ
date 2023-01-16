#include <iostream>
#include <queue>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    priority_queue<int, vector<int>, less<int>> pq;

    int N;
    cin >> N;

    while (N--)
    {
        int x;
        cin >> x;

        if (x)
            pq.push(x);
        else
        {
            if (!pq.empty())
            {
                cout << pq.top() << '\n';
                pq.pop();
            }
            else
                cout << 0 << '\n';
        }
    }
}