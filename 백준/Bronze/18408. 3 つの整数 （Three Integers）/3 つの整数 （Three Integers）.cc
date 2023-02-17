#include <iostream>
using namespace std;

int main()
{
    int cnt1 = 0, cnt2 = 0;
    for (int i = 0; i < 3; i++)
    {
        int a;
        cin >> a;

        if (a == 1)
            cnt1++;
        else
            cnt2++;
    }

    if (cnt1 > cnt2)
        cout << 1;
    else
        cout << 2;
}