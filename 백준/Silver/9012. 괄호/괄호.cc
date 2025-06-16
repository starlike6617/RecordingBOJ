#include <iostream>
#include <stack>
#define endl '\n'
using namespace std;

int main()
{
    int T;
    cin >> T;

    while (T--)
    {
        string s;
        cin >> s;

        stack<char> st;
        for (char c : s)
        {
            if (st.empty() || c == '(')
            {
                st.push(c);
            }
            else if (c == ')' && st.top() == '(')
            {
                st.pop();
            }
        }

        cout << (st.empty() ? "YES" : "NO") << endl;
    }
}