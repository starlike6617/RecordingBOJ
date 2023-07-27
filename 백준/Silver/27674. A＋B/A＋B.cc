#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int t;
    cin >> t;

    int arr[t];
    while (t--)
    {
        string s;
        cin >> s;

        string c[s.size()] = {};
        for (int i = 0; i < s.size(); i++)
        {
            c[i] += s[i];
        }

        sort(c, c + s.size(), greater<string>());

        string a = "", b = "";
        for (int i = 0; i < s.size(); i++)
        {
            if (i == s.size() - 1)
            {
                b += c[i];
            }
            else
            {
                a += c[i];
            }
        }
        cout << stoi(a) + stoi(b) << endl;
    }
}