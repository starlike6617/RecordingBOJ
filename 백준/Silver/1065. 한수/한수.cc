#include <iostream>
using namespace std;

bool isHan(int x)
{
    bool res = false;
    if (x < 100)
        res = true;
    else if ((x < 1000) && ((x / 100 - (x / 10) % 10) == ((x / 10) % 10 - x % 10)))
        res = true;
    return res;
}

int main()
{
    int n, cnt = 0;
    cin >> n;

    for (int i = 1; i <= n; i++)
        if (isHan(i))
            cnt++;

    cout << cnt;
}