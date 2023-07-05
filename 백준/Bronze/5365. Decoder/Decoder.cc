#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    string s[n];
    for (int i = 0; i < n; i++)
        cin >> s[i];

    int idx = 0;
    for (int i = 0; i < n; i++)
    {
        if (idx >= s[i].size())
            cout << ' ';
        else
            cout << s[i][idx];

        idx = s[i].size() - 1;
    }
}