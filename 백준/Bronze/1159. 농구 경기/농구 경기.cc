#include <iostream>
using namespace std;

int main()
{
    int N;
    cin >> N;

    int alp[26] = {};
    while (N--)
    {
        string s;
        cin >> s;
        alp[s[0] - 'a']++;
    }

    bool flag = false;
    for (int i = 0; i < 26; i++)
        if (alp[i] >= 5)
        {
            flag = true;
            cout << (char)(i + 'a');
        }

    if (!flag)
        cout << "PREDAJA";
}