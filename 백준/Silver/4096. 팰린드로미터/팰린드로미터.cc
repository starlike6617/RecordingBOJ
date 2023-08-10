#include <iostream>
using namespace std;

bool isPalindrome(string s)
{
    for (int i = 0; i < s.size() / 2; i++)
    {
        if (s[i] != s[s.size() - i - 1])
        {
            return false;
        }
    }
    return true;
}

int main()
{
    while (true)
    {
        string s;
        cin >> s;

        if (s == "0")
        {
            break;
        }

        int cnt = 0;
        while (!isPalindrome(s))
        {
            string zero = "";
            for (char c : s)
            {
                if (c == '0')
                {
                    zero += '0';
                }
                else
                {
                    break;
                }
            }

            string tmp = to_string(stoi(s) + 1);
            if (zero.size() + tmp.size() == s.size())
            {
                s = zero + tmp;
            }
            else
            {
                s = zero.substr(0, zero.size() - 1) + tmp;
            }

            cnt++;
        }
        cout << cnt << '\n';
    }
}