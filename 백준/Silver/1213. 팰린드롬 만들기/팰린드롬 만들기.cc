#include <iostream>
using namespace std;

int main()
{
    string s;
    cin >> s;

    int alp[26] = {};
    for (char c : s)
        alp[c - 'A']++;

    int odd = 0, oddIdx = 0;
    for (int i = 0; i < 26; i++)
        if (alp[i] % 2 == 1)
        {
            odd++;
            oddIdx = i;
        }

    if (odd > 1)
    {
        cout << "I'm Sorry Hansoo";
        return 0;
    }

    for (int i = 0; i < 26; i++)
        for (int j = 0; j < alp[i] / 2; j++)
            cout << (char)('A' + i);

    if (odd == 1)
        cout << (char)('A' + oddIdx);

    for (int i = 25; i >= 0; i--)
        for (int j = 0; j < alp[i] / 2; j++)
            cout << (char)('A' + i);
}