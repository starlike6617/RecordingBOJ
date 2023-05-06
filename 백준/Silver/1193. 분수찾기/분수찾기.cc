#include <iostream>
using namespace std;

int main()
{
    int X;
    cin >> X;

    int i = 1;
    while (X > i)
    {
        X -= i;
        i++;
    }

    if (i % 2 == 0)
        cout << X << '/' << i - X + 1;
    else
        cout << i - X + 1 << '/' << X;
}