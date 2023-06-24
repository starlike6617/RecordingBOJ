#include <iostream>
using namespace std;

int main()
{
    string name;
    cin >> name;

    int n;
    cin >> n;

    int cntL1 = 0, cntO1 = 0, cntV1 = 0, cntE1 = 0;
    for (char c : name)
    {
        if (c == 'L')
            cntL1++;
        else if (c == 'O')
            cntO1++;
        else if (c == 'V')
            cntV1++;
        else if (c == 'E')
            cntE1++;
    }

    int res = 0;
    string resName = "ZZZZZZZZZZZZZZZZZZZZ";

    while (n--)
    {
        string s;
        cin >> s;

        int cntL2 = 0, cntO2 = 0, cntV2 = 0, cntE2 = 0;
        for (char c : s)
        {
            if (c == 'L')
                cntL2++;
            else if (c == 'O')
                cntO2++;
            else if (c == 'V')
                cntV2++;
            else if (c == 'E')
                cntE2++;
        }

        int cntL = cntL1 + cntL2;
        int cntO = cntO1 + cntO2;
        int cntV = cntV1 + cntV2;
        int cntE = cntE1 + cntE2;

        int score = ((cntL + cntO) * (cntL + cntV) * (cntL + cntE) * (cntO + cntV) * (cntO + cntE) * (cntV + cntE)) % 100;
        if (score > res)
        {
            res = score;
            resName = s;
        }
        else if (score == res)
            if (s < resName)
                resName = s;
    }

    cout << resName;
}