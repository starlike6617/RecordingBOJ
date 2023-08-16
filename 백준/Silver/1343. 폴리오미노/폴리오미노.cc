#include <iostream>
#include <vector>
using namespace std;

int main()
{
    string s;
    cin >> s;

    string res = "";
    int cnt = 0;

    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == 'X')
        {
            cnt++;
        }

        if (s[i] == '.' || i == s.size() - 1)
        {
            if (cnt % 2 == 1)
            {
                cout << -1;
                return 0;
            }

            while (cnt >= 4)
            {
                res += "AAAA";
                cnt -= 4;
            }

            if (cnt == 2)
            {
                res += "BB";
                cnt -= 2;
            }

            if (s[i] == '.')
            {
                res += ".";
            }
        }
    }

    cout << res;
}