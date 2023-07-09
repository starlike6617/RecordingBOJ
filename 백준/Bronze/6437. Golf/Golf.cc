#include <iostream>
using namespace std;

int main()
{
    for (int i = 1;; i++)
    {
        int p, s;
        cin >> p >> s;

        if (p == 0 && s == 0)
        {
            break;
        }

        cout << "Hole #" << i << endl;
        if (s == 1)
        {
            cout << "Hole-in-one." << endl;
        }
        else if (p - 3 >= s)
        {
            cout << "Double Eagle." << endl;
        }
        else if (p - 2 == s)
        {
            cout << "Eagle." << endl;
        }
        else if (p - 1 == s)
        {
            cout << "Birdie." << endl;
        }
        else if (p == s)
        {
            cout << "Par." << endl;
        }
        else if (p + 1 == s)
        {
            cout << "Bogey." << endl;
        }
        else if (p + 2 <= s)
        {
            cout << "Double Bogey." << endl;
        }
        cout << endl;
    }
}