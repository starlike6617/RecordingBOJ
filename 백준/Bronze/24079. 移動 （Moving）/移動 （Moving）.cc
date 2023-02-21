#include <iostream>
using namespace std;

int main()
{
    int X, Y, Z;
    cin >> X >> Y >> Z;
    cout << (X + Y <= Z + 0.5 ? 1 : 0);
}