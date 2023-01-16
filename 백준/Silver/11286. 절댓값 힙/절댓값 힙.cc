#include <iostream>
#include <queue>
using namespace std;

struct cmp
{
    bool operator()(int a, int b)
    {
        if (abs(a) == abs(b))
            return a > b;
        else
            return abs(a) > abs(b);
    }
};

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    priority_queue<int, vector<int>, cmp> pq;

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