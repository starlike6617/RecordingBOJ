#include <iostream>
using namespace std;

bool checkVowel(string s)
{
    for (char c : s)
        if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u')
            return true;
    return false;
}

bool checkTripleVowel(string s)
{
    if (s.size() < 3)
        return true;
    for (int i = 0; i < s.size() - 2; i++)
        if (s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u')
            if (s[i + 1] == 'a' || s[i + 1] == 'e' || s[i + 1] == 'i' || s[i + 1] == 'o' || s[i + 1] == 'u')
                if (s[i + 2] == 'a' || s[i + 2] == 'e' || s[i + 2] == 'i' || s[i + 2] == 'o' || s[i + 2] == 'u')
                    return false;
    return true;
}

bool checkTripleConsonant(string s)
{
    if (s.size() < 3)
        return true;
    for (int i = 0; i < s.size() - 2; i++)
        if (s[i] != 'a' && s[i] != 'e' && s[i] != 'i' && s[i] != 'o' && s[i] != 'u')
            if (s[i + 1] != 'a' && s[i + 1] != 'e' && s[i + 1] != 'i' && s[i + 1] != 'o' && s[i + 1] != 'u')
                if (s[i + 2] != 'a' && s[i + 2] != 'e' && s[i + 2] != 'i' && s[i + 2] != 'o' && s[i + 2] != 'u')
                    return false;
    return true;
}

bool checkDoubleChar(string s)
{
    if (s.size() < 2)
        return true;
    for (int i = 0; i < s.size() - 1; i++)
        if (s[i] == s[i + 1] && s[i] != 'e' && s[i] != 'o')
            return false;
    return true;
}

int main()
{
    while (1)
    {
        string str;
        cin >> str;

        if (str == "end")
            break;

        cout << "<" << str << "> is ";
        if (checkVowel(str) && checkTripleVowel(str) && checkTripleConsonant(str) && checkDoubleChar(str))
            cout << "acceptable." << endl;
        else
            cout << "not acceptable." << endl;
    }
}