#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int alp[26] = {};
    int cnt = 0;

    for (int i = 0; i < n; i++)
    {
        string s;
        cin >> s;
        alp[s[0] - 'A']++;
    }

    for (int i = 0; i < 26; i++)
    {
        if (alp[i] > 0)
        {
            cnt++;
        }
        else
        {
            break;
        }
    }

    cout << cnt;
}