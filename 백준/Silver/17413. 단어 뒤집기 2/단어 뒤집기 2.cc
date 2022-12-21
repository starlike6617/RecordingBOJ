#include <iostream>
#include <stack>
#include <algorithm>
using namespace std;

int main()
{
    string str;
    getline(cin, str);

    bool isTag = false;
    stack<char> s;

    for (int i = 0; i < str.size(); i++)
    {
        if (str[i] == '<')
            isTag = true;
        else if (str[i] == '>')
            isTag = false;

        if (isTag || str[i] == '>' || str[i] == ' ')
        {
            cout << str[i];
            continue;
        }

        s.push(str[i]);

        if (i == str.size() - 1 || (i != str.size() - 1 && (str[i + 1] == ' ' || str[i + 1] == '<')))
            while (!s.empty())
            {
                cout << s.top();
                s.pop();
            }
    }
}