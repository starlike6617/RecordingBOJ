#include <iostream>
using namespace std;

int main()
{
    int B;
    cin >> B;

    int P = 5 * B - 400;
    cout << P << endl;

    if (P > 100)
        cout << -1;
    else if (P == 100)
        cout << 0;
    else
        cout << 1;
}