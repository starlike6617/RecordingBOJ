#include <iostream>
using namespace std;

int main()
{
    int k;
    cin >> k;

    cout << fixed;
    cout.precision(2);

    double fee = 25 + k * 0.01;
    if (fee < 100)
        cout << 100;
    else if (fee > 2000)
        cout << 2000;
    else
        cout << fee;
}