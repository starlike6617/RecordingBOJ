#include <iostream>
using namespace std;

int main()
{
    int T;
    cin >> T;

    for (int i = 1; i <= T; i++)
    {
        int a[6], b[7];
        for (int i = 0; i < 6; i++)
            cin >> a[i];
        for (int i = 0; i < 7; i++)
            cin >> b[i];

        int score1 = a[0] + a[1] * 2 + a[2] * 3 + a[3] * 3 + a[4] * 4 + a[5] * 10;
        int score2 = b[0] + b[1] * 2 + b[2] * 2 + b[3] * 2 + b[4] * 3 + b[5] * 5 + b[6] * 10;

        if (score1 > score2)
            cout << "Battle " << i << ": Good triumphs over Evil" << endl;
        else if (score1 < score2)
            cout << "Battle " << i << ": Evil eradicates all trace of Good" << endl;
        else
            cout << "Battle " << i << ": No victor on this battle field" << endl;
    }
}