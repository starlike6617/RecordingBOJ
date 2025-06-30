#include <iostream>
#include <queue>
#define endl '\n'
using namespace std;

struct cmp
{
    bool operator()(int a, int b)
    {
        if (abs(a) == abs(b))
        {
            return a > b;
        }
        return abs(a) > abs(b);
    }
};

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int N;
    cin >> N;

    priority_queue<int, vector<int>, cmp> pq;
    while (N--)
    {
        int x;
        cin >> x;

        if (x)
        {
            pq.push(x);
        }
        else if (pq.empty())
        {
            cout << 0 << endl;
        }
        else
        {
            cout << pq.top() << endl;
            pq.pop();
        }
    }
}