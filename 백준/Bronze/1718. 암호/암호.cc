#include <iostream>
using namespace std;

int main()
{
    string s, key;
    getline(cin, s);
    cin >> key;

    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == ' ')
        {
            cout << ' ';
            continue;
        }

        int k = key[i % key.size()] - 'a';
        cout << (char)(s[i] - k - 1 < 'a' ? s[i] - k + 25 : s[i] - k - 1);
    }
}