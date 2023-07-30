#include <iostream>
using namespace std;

int main()
{
    int alp[26] = {};
    while (true)
    {
        string s;
        getline(cin, s);

        if (cin.eof())
        {
            break;
        }

        for (char c : s)
        {
            if (c != ' ')
            {
                alp[c - 'a']++;
            }
        }
    }

    int maxFreq = 0;
    for (int i : alp)
    {
        maxFreq = max(maxFreq, i);
    }

    for (int i = 0; i < 26; i++)
    {
        if (alp[i] == maxFreq)
        {
            cout << (char)(i + 'a');
        }
    }
}