#include <iostream>
using namespace std;

int main()
{
    string str;
    cin >> str;

    int cntB = 0, cntC = 0;
    for (char c : str)
    {
        if (c == 'B')
            cntB++;
        else
            cntC++;
    }

    cout << cntB / 2 + cntC / 2;
}