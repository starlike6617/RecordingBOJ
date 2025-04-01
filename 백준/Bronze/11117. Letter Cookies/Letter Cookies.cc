#include <iostream>
#include <vector>
#include <algorithm>
#define endl '\n'
using namespace std;

int main()
{
    int T;
    cin >> T;

    while (T--)
    {
        string box;
        cin >> box;

        vector<char> boxAlp(26);
        for (char c : box)
        {
            boxAlp[c - 'A']++;
        }

        int W;
        cin >> W;

        while (W--)
        {
            string s;
            cin >> s;

            vector<char> alp(26);
            for (char c : s)
            {
                alp[c - 'A']++;
            }

            bool isPos = true;
            for (int i = 0; i < 26; i++)
            {
                if (boxAlp[i] < alp[i])
                {
                    isPos = false;
                }
            }

            cout << (isPos ? "YES" : "NO") << endl;
        }
    }
}