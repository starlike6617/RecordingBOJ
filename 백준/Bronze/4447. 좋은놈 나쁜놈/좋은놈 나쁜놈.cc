#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    cin.ignore();

    while (n--)
    {
        string s;
        getline(cin, s);

        int cntG = 0, cntB = 0;
        for (char c : s)
        {
            if (c == 'g' || c == 'G')
            {
                cntG++;
            }
            else if (c == 'b' || c == 'B')
            {
                cntB++;
            }
        }

        cout << s << " is ";
        if (cntG > cntB)
        {
            cout << "GOOD";
        }
        else if (cntG < cntB)
        {
            cout << "A BADDY";
        }
        else
        {
            cout << "NEUTRAL";
        }
        cout << endl;
    }
}