#include <iostream>
#include <queue>
using namespace std;

int main()
{
    int n;
    cin >> n;

    priority_queue<int> pq;
    while (n--)
    {
        int a;
        cin >> a;

        if (a != 0)
        {
            while (a--)
            {
                int x;
                cin >> x;
                pq.push(x);
            }
        }
        else
        {
            if (pq.empty())
            {
                cout << -1 << '\n';
            }
            else
            {
                cout << pq.top() << '\n';
                pq.pop();
            }
        }
    }
}