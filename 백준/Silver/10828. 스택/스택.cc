#include <iostream>
#include <stack>
#define endl '\n'
using namespace std;

int main()
{
    int N;
    cin >> N;

    stack<int> st;
    while (N--)
    {
        string s;
        cin >> s;

        if (s == "push")
        {
            int X;
            cin >> X;
            st.push(X);
        }
        else if (s == "pop")
        {
            if (st.empty())
            {
                cout << -1 << endl;
            }
            else
            {
                cout << st.top() << endl;
                st.pop();
            }
        }
        else if (s == "size")
        {
            cout << st.size() << endl;
        }
        else if (s == "empty")
        {
            cout << st.empty() << endl;
        }
        else if (s == "top")
        {
            cout << (st.empty() ? -1 : st.top()) << endl;
        }
    }
}