#include <iostream>
#include <queue>
using namespace std;

int main()
{
    int n, a;
    cin >> n;

    queue<int> q;
    while (1)
    {
        cin >> a;

        if (a == -1)
            break;
        else if (a == 0)
            q.pop();
        else if (q.size() < n)
            q.push(a);
    }

    if (q.empty())
    {
        cout << "empty";
        return 0;
    }

    for (int i = 0; i < n; i++)
    {
        if (q.empty())
            break;
        cout << q.front() << ' ';
        q.pop();
    }
}