#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

int main()
{
    string s;
    while (getline(cin, s))
    {
        char arrV[6] = {'a', 'i', 'y', 'e', 'o', 'u'};
        char arrC[20] = {'b', 'k', 'x', 'z', 'n', 'h', 'd', 'c', 'w', 'g', 'p', 'v', 'j', 'q', 't', 's', 'r', 'l', 'm', 'f'};

        for (char c : s)
        {
            if (!isalpha(c))
            {
                cout << c;
                continue;
            }

            bool isCapital = false;
            if ('A' <= c && c <= 'Z')
            {
                isCapital = true;
                c = c - 'A' + 'a';
            }

            char res;
            for (int i = 0; i < 6; i++)
            {
                if (c == arrV[i])
                {
                    res = arrV[(i + 3) % 6];
                }
            }
            for (int i = 0; i < 20; i++)
            {
                if (c == arrC[i])
                {
                    res = arrC[(i + 10) % 20];
                }
            }

            cout << (isCapital ? (char)(res - 'a' + 'A') : res);
        }
        cout << endl;
    }
}