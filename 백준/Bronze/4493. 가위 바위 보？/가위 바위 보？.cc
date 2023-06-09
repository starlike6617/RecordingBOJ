#include <iostream>
using namespace std;

int RSP(char a, char b)
{
    if (a == b)
        return 0;
    else if (a == 'R')
        return b == 'S' ? 1 : -1;
    else if (a == 'S')
        return b == 'P' ? 1 : -1;
    else
        return b == 'R' ? 1 : -1;
}

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;

        int res = 0;
        while (n--)
        {
            char p1, p2;
            cin >> p1 >> p2;
            res += RSP(p1, p2);
        }

        if (res > 0)
            cout << "Player 1" << endl;
        else if (res < 0)
            cout << "Player 2" << endl;
        else
            cout << "TIE" << endl;
    }
}