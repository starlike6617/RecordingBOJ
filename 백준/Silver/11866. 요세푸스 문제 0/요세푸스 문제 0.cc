#include <iostream>
#include <queue>
#define endl '\n'
using namespace std;

int main()
{
    int K, N;
    cin >> K >> N;

    queue<int> q;
    for (int i = 1; i <= K; i++)
    {
        q.push(i);
    }

    cout << '<';

    while (!q.empty())
    {
        for (int i = 0; i < N - 1; i++)
        {
            q.push(q.front());
            q.pop();
        }

        cout << q.front();
        if (q.size() > 1)
        {
            cout << ", ";
        }

        q.pop();
    }

    cout << '>';
}