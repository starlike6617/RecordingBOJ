#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

int main()
{
    string s1, s2;
    while (cin >> s1 >> s2)
    {
        int idx1 = 0, idx2 = 0;
        while (idx1 < s1.size() && idx2 < s2.size())
        {
            if (s1[idx1] == s2[idx2])
            {
                idx1++;
                idx2++;
            }
            else
            {
                idx2++;
            }
        }

        if (idx1 == s1.size())
        {
            cout << "Yes" << endl;
        }
        else
        {
            cout << "No" << endl;
        }
    }
}