#include <iostream>
using namespace std;

int main()
{
    string str;
    cin >> str;

    bool isMOBIS[5] = {};
    for (char c : str)
    {
        if (c == 'M')
            isMOBIS[0] = true;
        else if (c == 'O')
            isMOBIS[1] = true;
        else if (c == 'B')
            isMOBIS[2] = true;
        else if (c == 'I')
            isMOBIS[3] = true;
        else if (c == 'S')
            isMOBIS[4] = true;
    }

    if (isMOBIS[0] && isMOBIS[1] && isMOBIS[2] && isMOBIS[3] && isMOBIS[4])
        cout << "YES";
    else
        cout << "NO";
}