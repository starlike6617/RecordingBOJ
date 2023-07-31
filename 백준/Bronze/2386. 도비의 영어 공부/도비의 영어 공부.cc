#include <iostream>
using namespace std;

int main()
{
    while (true)
    {
        char c;
        cin >> c;

        if (c == '#')
        {
            break;
        }

        string s;
        getline(cin, s);

        int cnt = 0;
        for (char ch : s)
        {
            if (ch == c || ch == c - 'a' + 'A')
            {
                cnt++;
            }
        }
        cout << c << ' ' << cnt << endl;
    }
}