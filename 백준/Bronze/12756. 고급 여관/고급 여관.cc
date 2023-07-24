#include <iostream>
using namespace std;

int main()
{
    int ap, ah, bp, bh;
    cin >> ap >> ah >> bp >> bh;

    int res1 = ah / bp + (ah % bp != 0);
    int res2 = bh / ap + (bh % ap != 0);

    if (res1 > res2)
    {
        cout << "PLAYER A";
    }
    else if (res1 < res2)
    {
        cout << "PLAYER B";
    }
    else
    {
        cout << "DRAW";
    }
}