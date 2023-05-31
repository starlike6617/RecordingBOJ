#include <iostream>
using namespace std;

int main()
{
    string str;
    cin >> str;

    int alp[26] = {};
    for (char c : str)
        alp[c - 'A']++;

    for (int i = 0; i < 26; i++)
        if (alp[i] == 0)
        {
            cout << (char)(i + 'A');
            break;
        }
}