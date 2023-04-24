#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int x, N;
    cin >> x >> N;

    while (N--)
    {
        if (x % 2 == 0)
            x = (int)floor((double)x / 2) ^ 6;
        else
            x = (2 * x) ^ 6;
    }

    cout << x << endl;
}