#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        string s;
        cin >> s;

        bool isFake = false;
        int arr[26] = {};
        for (int i = 0; i < s.size(); i++)
        {
            arr[s[i] - 'A']++;
            if (arr[s[i] - 'A'] % 3 == 0)
            {
                if (i == s.size() - 1 || s[i] != s[i + 1])
                {
                    isFake = true;
                    break;
                }
                else
                {
                    i++;
                }
            }
        }

        cout << (isFake ? "FAKE" : "OK") << endl;
    }
}