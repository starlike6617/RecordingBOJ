#include <iostream>
#include <vector>
using namespace std;

bool isSeparator(char c)
{
    if (c == '<' || c == '>' || c == '&' || c == '|' || c == '(' || c == ')' || c == ' ')
        return true;
    else
        return false;
}

int main()
{
    string str;
    getline(cin, str);

    string temp = "";
    vector<string> v;

    for (int i = 0; i < str.size(); i++)
    {
        if (isSeparator(str[i]) && temp.size() != 0)
        {
            v.push_back(temp);
            temp = "";
        }

        if (str[i] == '<')
        {
            v.push_back("<");
        }
        else if (str[i] == '>')
        {
            v.push_back(">");
        }
        else if (str[i] == '&')
        {
            v.push_back("&&");
            i++;
        }
        else if (str[i] == '|')
        {
            v.push_back("||");
            i++;
        }
        else if (str[i] == '(')
        {
            v.push_back("(");
        }
        else if (str[i] == ')')
        {
            v.push_back(")");
        }
        else if (str[i] == ' ')
        {
            continue;
        }
        else
        {
            temp.append(1, str[i]);
        }
    }

    if (temp.size() != 0)
        v.push_back(temp);

    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i];
        if (i != v.size() - 1)
            cout << ' ';
    }
}