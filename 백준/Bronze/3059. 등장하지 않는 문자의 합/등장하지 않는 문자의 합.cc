#include <iostream>
using namespace std;

int main()
{
    int T;
    cin >> T;

    while (T--)
    {
        string S;
        cin >> S;

        bool alp[26] = {};
        for (char c : S)
            alp[c - 'A'] = true;

        int res = 0;
        for (int i = 0; i < 26; i++)
            if (!alp[i])
                res += i + 65;

        cout << res << endl;
    }
}