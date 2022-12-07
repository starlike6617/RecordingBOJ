#include <iostream>
#include <stack>
using namespace std;

int main()
{
    while (1)
    {
        string str;
        getline(cin, str);

        if (str == ".")
            break;

        bool res = true;
        stack<char> s;
        for (char ch : str)
        {
            if (ch == '(' || ch == '[')
            {
                s.push(ch);
            }
            else if (ch == ')')
            {
                if (!s.empty() && s.top() == '(')
                    s.pop();
                else
                {
                    res = false;
                    break;
                }
            }
            else if (ch == ']')
            {
                if (!s.empty() && s.top() == '[')
                    s.pop();
                else
                {
                    res = false;
                    break;
                }
            }

            if (ch == '.' && !s.empty())
                res = false;
        }

        cout << (res ? "yes" : "no") << '\n';
    }
}