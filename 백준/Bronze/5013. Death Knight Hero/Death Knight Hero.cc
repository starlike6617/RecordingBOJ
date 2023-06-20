#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int cnt = 0;
    while (n--)
    {
        bool isWin = true;
        string s;
        cin >> s;

        for (int i = 0; i < s.size() - 1; i++)
            if (s[i] == 'C' && s[i + 1] == 'D')
                isWin = false;

        if (isWin)
            cnt++;
    }

    cout << cnt;
}