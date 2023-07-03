#include <iostream>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N;
    cin >> N;

    string prevName, curName;
    cin >> prevName >> curName;

    bool isInc = false;
    if (prevName < curName)
        isInc = true;
    else if (prevName > curName)
        isInc = false;

    bool isNEITHER = false;
    for (int i = 2; i < N; i++)
    {
        prevName = curName;
        cin >> curName;

        if (!isNEITHER && ((isInc == true && prevName > curName) || (isInc == false && prevName < curName)))
        {
            isNEITHER = true;
            cout << "NEITHER";
        }
    }

    if (!isNEITHER && isInc == true)
        cout << "INCREASING";
    else if (!isNEITHER && isInc == false)
        cout << "DECREASING";
}