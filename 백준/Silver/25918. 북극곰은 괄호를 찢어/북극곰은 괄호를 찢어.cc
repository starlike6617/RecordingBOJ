#include <iostream>
#include <stack>
using namespace std;

int main()
{
    int N;
    string s;
    cin >> N >> s;

    stack<char> st;
    int cnt = 0;

    for (int i = 0; i < N; i++)
    {
        if (st.empty() || s[i] == st.top())
        {
            st.push(s[i]);
            cnt = max(cnt, (int)st.size());
        }
        else
        {
            st.pop();
        }
    }

    if (!st.empty())
    {
        cnt = -1;
    }

    cout << cnt;
}