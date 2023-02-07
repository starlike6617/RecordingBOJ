#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int X, Y;
    cin >> X >> Y;

    for (int i = X; i <= Y; i++)
        if ((i - X) % 60 == 0)
            cout << "All positions change in year " << i << endl;
}