#include <iostream>
#include <stack>
using namespace std;

int main()
{
    int n;
    cin >> n;

    stack<int> s, tmp;
    for (int i = 0; i < n; i++)
    {
        int a;
        cin >> a;

        while (a--)
        {
            tmp.push(s.top());
            s.pop();
        }
        s.push(i + 1);
        while (!tmp.empty())
        {
            s.push(tmp.top());
            tmp.pop();
        }
    }

    while (!s.empty())
    {
        tmp.push(s.top());
        s.pop();
    }

    while (!tmp.empty())
    {
        cout << tmp.top() << ' ';
        tmp.pop();
    }
}