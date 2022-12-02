#include <iostream>
using namespace std;

int main()
{
    string str;
    cin >> str;

    int cnt = 0;
    for (int i = 0; i < str.size(); i++)
    {
        if (i + 1 < str.size() && str[i] == 'c' && (str[i + 1] == '=' || str[i + 1] == '-'))
        {
            i++;
        }
        else if (i + 2 < str.size() && str[i] == 'd' && str[i + 1] == 'z' && str[i + 2] == '=')
        {
            i += 2;
        }
        else if (i + 1 < str.size() && str[i] == 'd' && str[i + 1] == '-')
        {
            i++;
        }
        else if (i + 1 < str.size() && str[i] == 'l' && str[i + 1] == 'j')
        {
            i++;
        }
        else if (i + 1 < str.size() && str[i] == 'n' && str[i + 1] == 'j')
        {
            i++;
        }
        else if (i + 1 < str.size() && str[i] == 's' && str[i + 1] == '=')
        {
            i++;
        }
        else if (i + 1 < str.size() && str[i] == 'z' && str[i + 1] == '=')
        {
            i++;
        }
        cnt++;
    }
    cout << cnt;
}