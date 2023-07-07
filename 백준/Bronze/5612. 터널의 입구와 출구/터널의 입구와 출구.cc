#include <iostream>
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;

    int res = m;
    bool flag = false;

    while (n--)
    {
        int a, b;
        cin >> a >> b;

        m += a - b;
        res = max(res, m);

        if (m < 0)
        {
            flag = true;
        }
    }

    if (flag)
    {
        cout << 0;
    }
    else
    {
        cout << res;
    }
}