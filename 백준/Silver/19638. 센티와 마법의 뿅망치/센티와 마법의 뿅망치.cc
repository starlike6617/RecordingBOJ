#include <iostream>
#include <queue>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N, Hcenti, T;
    cin >> N >> Hcenti >> T;

    priority_queue<int> pq;
    while (N--)
    {
        int H;
        cin >> H;
        pq.push(H);
    }

    int cnt = 0;
    while (T--)
    {
        if (pq.top() < Hcenti || pq.top() == 1)
        {
            break;
        }

        int temp = pq.top() / 2;
        pq.pop();
        pq.push(temp);

        cnt++;
    }

    if (pq.top() < Hcenti)
    {
        cout << "YES" << endl;
        cout << cnt;
    }
    else
    {
        cout << "NO" << endl;
        cout << pq.top();
    }
}