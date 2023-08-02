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
        for (char c : s)
        {
            if (c == '1')
            {
                cnt++;
            }
        }

        if ((cnt % 2 == 0) ^ (s.back() == 'e'))
        {
            s.back() = '1';
        }
        else
        {
            s.back() = '0';
        }

        cout << s << endl;
    }
}