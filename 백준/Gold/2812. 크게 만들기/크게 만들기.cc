#include <iostream>
#include <stack>
#include <algorithm>
using namespace std;

int main()
{
    int N, K;
    cin >> N >> K;

    string s;
    cin >> s;

    stack<int> st;
    for (char c : s)
    {
        while (K > 0 && !st.empty() && st.top() < c)
        {
            st.pop();
            K--;
        }
        st.push(c);
    }

    string res = "";
    while (!st.empty())
    {
        res += st.top();
        st.pop();
    }
    
    reverse(res.begin(), res.end());
    res = res.substr(0, res.size() - K);

    cout << res;
}