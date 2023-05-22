#include <iostream>
using namespace std;

int main()
{
    int ds, ys, dm, ym;
    cin >> ds >> ys >> dm >> ym;

    int cnt = 0;
    while (ds % ys != dm % ym)
    {
        ds++;
        dm++;
        cnt++;
    }

    cout << cnt;
}