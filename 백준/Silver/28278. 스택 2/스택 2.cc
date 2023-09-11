#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N;
    cin >> N;

    stack<int> s;
    while (N--)
    {
        int opr;
        cin >> opr;

        if (opr == 1)
        {
            int X;
            cin >> X;
            s.push(X);
        }
        else if (opr == 2)
        {
            if (!s.empty())
            {
                cout << s.top() << endl;
                s.pop();
            }
            else
            {
                cout << -1 << endl;
            }
        }
        else if (opr == 3)
        {
            cout << s.size() << endl;
        }
        else if (opr == 4)
        {
            cout << (s.empty() ? 1 : 0) << endl;
        }
        else
        {
            cout << (s.empty() ? -1 : s.top()) << endl;
        }
    }
}
