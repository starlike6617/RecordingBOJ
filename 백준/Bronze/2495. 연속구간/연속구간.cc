#include <iostream>
using namespace std;

int main()
{
    for (int i = 0; i < 3; i++)
    {
        string s;
        cin >> s;

        int cnt = 1, res = 1;
        for (int i = 0; i < 7; i++)
        {
            if (s[i] == s[i + 1])
            {
                cnt++;
            }
            else
            {
                cnt = 1;
            }
            res = max(res, cnt);
        }
        cout << res << endl;
    }
}