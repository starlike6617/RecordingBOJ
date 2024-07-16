#include <iostream>
#include <stack>
#define endl '\n'
using namespace std;

int main()
{
    int N;
    cin >> N;

    int cnt = 0;
    while (N--)
    {
        string s;
        cin >> s;

        stack<char> st;
        for (char c : s)
        {
            if (st.empty() || c != st.top())
                st.push(c);
            else
                st.pop();
        }

        if (st.empty())
            cnt++;
    }

    cout << cnt;
}