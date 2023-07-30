#include <iostream>
using namespace std;

int main()
{
    int res = 0;
    for (int i = 0; i < 10; i++)
    {
        int t;
        cin >> t;

        if (t == 1)
        {
            res += 1;
        }
        else if (t == 2)
        {
            res += 2;
        }
        else
        {
            res += 3;
        }
    }

    if (res % 4 == 0)
    {
        cout << 'N';
    }
    else if (res % 4 == 1)
    {
        cout << 'E';
    }
    else if (res % 4 == 2)
    {
        cout << 'S';
    }
    else
    {
        cout << 'W';
    }
}