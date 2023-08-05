#include <iostream>
using namespace std;

int main()
{
    while (true)
    {
        string s;
        cin >> s;

        if (s == "#")
        {
            break;
        }

        int cnt = 0;
        bool isLeft = true;

        for (int i = 0; i < s.size(); i++)
        {
            bool tmpLeft = true;
            if (s[i] == 'y' || s[i] == 'u' || s[i] == 'i' || s[i] == 'o' || s[i] == 'p' || s[i] == 'h' || s[i] == 'j' || s[i] == 'k' || s[i] == 'l' || s[i] == 'n' || s[i] == 'm')
            {
                tmpLeft = false;
            }

            if (i == 0)
            {
                isLeft = tmpLeft;
                continue;
            }

            if (isLeft != tmpLeft)
            {
                cnt++;
                isLeft = tmpLeft;
            }
        }

        cout << cnt << endl;
    }
}