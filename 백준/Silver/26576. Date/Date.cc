#include <iostream>
#include <vector>
#include <sstream>
#define endl '\n'
using namespace std;

int month2num(string s)
{
    vector<string> v(12);
    v = {"January", "February", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December"};

    for (int i = 0; i < 12; i++)
    {
        if (s == v[i])
        {
            return i + 1;
        }
    }
    return 0;
}

int main()
{
    int n;
    cin >> n;

    while (n--)
    {
        string m, d, y;
        cin >> m >> d >> y;

        d.pop_back();
        int numD = stoi(d);

        int numY = stoi(y);
        numY %= 100;

        if (month2num(m) == 0 || numD < 1 || numD > 31)
        {
            cout << "Invalid" << endl;
            continue;
        }

        printf("%02d/%02d/%02d\n", month2num(m), numD, numY);
    }
}