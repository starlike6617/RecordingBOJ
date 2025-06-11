#include <iostream>
using namespace std;

int main()
{
    double M;
    cin >> M;

    cout << fixed;
    cout.precision(1);

    if (M <= 30)
    {
        cout << M / 2;
    }
    else
    {
        cout << (M - 30) * 3 / 2 + 15;
    }
}