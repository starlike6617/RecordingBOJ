#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int T;
    cin >> T;

    for (int i = 0; i < T; i++)
    {
        string S;
        cin >> S;

        int alp[26] = {};
        for (char c : S)
            alp[c - 'A']++;

        vector<int> res;
        bool isFin = false;
        while (!isFin)
        {
            if (alp['Z' - 'A'])
            {
                res.push_back(0);
                alp['Z' - 'A']--;
                alp['O' - 'A']--;
            }
            else if (alp['W' - 'A'])
            {
                res.push_back(2);
                alp['W' - 'A']--;
                alp['T' - 'A']--;
                alp['O' - 'A']--;
            }
            else if (alp['U' - 'A'])
            {
                res.push_back(4);
                alp['U' - 'A']--;
                alp['F' - 'A']--;
                alp['O' - 'A']--;
            }
            else if (alp['X' - 'A'])
            {
                res.push_back(6);
                alp['X' - 'A']--;
                alp['S' - 'A']--;
                alp['I' - 'A']--;
            }
            else if (alp['G' - 'A'])
            {
                res.push_back(8);
                alp['G' - 'A']--;
                alp['I' - 'A']--;
                alp['T' - 'A']--;
            }
            else if (alp['O' - 'A'])
            {
                res.push_back(1);
                alp['O' - 'A']--;
            }
            else if (alp['T' - 'A'])
            {
                res.push_back(3);
                alp['T' - 'A']--;
            }
            else if (alp['F' - 'A'])
            {
                res.push_back(5);
                alp['F' - 'A']--;
                alp['I' - 'A']--;
            }
            else if (alp['S' - 'A'])
            {
                res.push_back(7);
                alp['S' - 'A']--;
            }
            else if (alp['I' - 'A'])
            {
                res.push_back(9);
                alp['I' - 'A']--;
            }
            else
            {
                isFin = true;
            }
        }

        sort(res.begin(), res.end());

        cout << "Case #" << i + 1 << ": ";
        for (int i : res)
            cout << i;
        cout << endl;
    }
}