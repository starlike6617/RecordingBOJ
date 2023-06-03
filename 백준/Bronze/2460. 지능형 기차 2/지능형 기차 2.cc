#include <iostream>
using namespace std;

int main()
{
    int res = 0, cur = 0;
    for (int i = 0; i < 10; i++)
    {
        int a, b;
        cin >> a >> b;
        cur += b - a;
        res = max(res, cur);
    }
    cout << res;
}