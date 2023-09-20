#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

int main()
{
    string key[4] = {"`1234567890-=",
                     "QWERTYUIOP[]\\",
                     "ASDFGHJKL;'",
                     "ZXCVBNM,./"};

    string s;
    while (getline(cin, s))
    {
        for (char c : s)
        {
            bool found = false;
            if (c == ' ')
            {
                cout << c;
            }
            else
            {
                for (int i = 0; i < 4; i++)
                {
                    for (int j = 0; j < key[i].size(); j++)
                    {
                        if (key[i][j] == c)
                        {
                            cout << key[i][j - 1];
                            found = true;
                            break;
                        }
                    }
                    if (found)
                        break;
                }
            }
        }
        cout << endl;
    }
}