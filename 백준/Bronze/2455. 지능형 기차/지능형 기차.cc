#include <iostream>
using namespace std;

int main()
{
    int res = 0, cur = 0;
    while (true)
    {
        int a, b;
        cin >> a >> b;

        if (b == 0)
            break;

        cur += b - a;
        res = max(res, cur);
    }
    cout << res;
}