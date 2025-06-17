#include <iostream>
#include <queue>
#define endl '\n'
using namespace std;

int main()
{
    int N;
    cin >> N;

    queue<int> q;
    while (N--)
    {
        string s;
        cin >> s;

        if (s == "push")
        {
            int X;
            cin >> X;
            q.push(X);
        }
        else if (s == "pop")
        {
            if (q.empty())
            {
                cout << -1 << endl;
            }
            else
            {
                cout << q.front() << endl;
                q.pop();
            }
        }
        else if (s == "size")
        {
            cout << q.size() << endl;
        }
        else if (s == "empty")
        {
            cout << q.empty() << endl;
        }
        else if (s == "front")
        {
            cout << (q.empty() ? -1 : q.front()) << endl;
        }
        else if (s == "back")
        {
            cout << (q.empty() ? -1 : q.back()) << endl;
        }
    }
}