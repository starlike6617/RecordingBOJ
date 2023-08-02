#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    while (true)
    {
        string s;
        cin >> s;

        if (s == "#")
        {
            break;
        }

        int res = 0;
        for (int i = 0; i < s.size(); i++)
        {
            int n;
            if (s[i] == '-')
            {
                n = 0;
            }
            else if (s[i] == '\\')
            {
                n = 1;
            }
            else if (s[i] == '(')
            {
                n = 2;
            }
            else if (s[i] == '@')
            {
                n = 3;
            }
            else if (s[i] == '?')
            {
                n = 4;
            }
            else if (s[i] == '>')
            {
                n = 5;
            }
            else if (s[i] == '&')
            {
                n = 6;
            }
            else if (s[i] == '%')
            {
                n = 7;
            }
            else if (s[i] == '/')
            {
                n = -1;
            }
            res += n * pow(8, s.size() - i - 1);
        }
        cout << res << endl;
    }
}