#include <string>
#include <iostream>
#include <stack>

using namespace std;

bool solution(string s)
{
    bool answer = true;

    stack<char> st;
    for (char c : s)
    {
        if (c == '(')
        {
            st.push('(');
        }
        else if (c == ')' && !st.empty())
        {
            st.pop();
        }
        else
        {
            return false;
        }
    }
    
    answer = (st.empty() ? true : false);

    return answer;
}