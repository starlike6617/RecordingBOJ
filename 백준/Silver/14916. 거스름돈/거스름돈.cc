#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    if (n == 1 || n == 3)
    {
        cout << -1;
        return 0;
    }

    int cnt = n / 5;
    n %= 5;

    if (n == 0)
    {
        cout << cnt;
    }
    else if (n == 1)
    {
        cout << cnt + 2;
    }
    else if (n == 2)
    {
        cout << cnt + 1;
    }
    else if (n == 3)
    {
        cout << cnt + 3;
    }
    else
    {
        cout << cnt + 2;
    }
}