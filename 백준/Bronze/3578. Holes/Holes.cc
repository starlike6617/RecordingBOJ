#include <iostream>
using namespace std;

int main()
{
    int h;
    cin >> h;

    if (h == 0)
        cout << 1;
    else if (h == 1)
        cout << 0;
    else if (h % 2 == 0)
    {
        for (int i = 0; i < h / 2; i++)
            cout << 8;
        return 0;
    }
    else
        cout << 4;
    h--;

    while (h > 0)
    {
        if (h >= 2)
        {
            cout << 8;
            h -= 2;
        }
        else if (h == 1)
        {
            cout << 0;
            h--;
        }
    }
}