#include <iostream>
#include <queue>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;

    string str;
    queue<int> q;

    for (int i = 0; i < n; i++)
    {
        cin >> str;
        if (str == "push")
        {
            int a;
            cin >> a;
            q.push(a);
        }
        else if (str == "pop")
        {
            if (!q.empty())
            {
                cout << q.front() << '\n';
                q.pop();
            }
            else
                cout << -1 << '\n';
        }
        else if (str == "size")
        {
            cout << q.size() << '\n';
        }
        else if (str == "empty")
        {
            cout << (q.empty() ? 1 : 0) << '\n';
        }
        else if (str == "front")
        {
            cout << (!q.empty() ? q.front() : -1) << '\n';
        }
        else if (str == "back")
        {
            cout << (!q.empty() ? q.back() : -1) << '\n';
        }
    }
}