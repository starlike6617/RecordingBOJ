#include <iostream>
#include <queue>
#define endl '\n'
using namespace std;

int main()
{
    int N, dasom;
    cin >> N >> dasom;

    if (N == 1)
    {
        cout << 0;
        return 0;
    }

    priority_queue<int> pq;
    for (int i = 0; i < N - 1; i++)
    {
        int num;
        cin >> num;
        pq.push(num);
    }

    int cnt = 0;
    while (dasom <= pq.top())
    {
        pq.push(pq.top() - 1);
        dasom++;
        pq.pop();
        cnt++;
    }

    cout << cnt;
}