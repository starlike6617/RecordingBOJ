#include <iostream>
using namespace std;

int main()
{
    int K, D, A;
    char ch;
    cin >> K >> ch >> D >> ch >> A;

    if (K + A < D || D == 0)
        cout << "hasu";
    else
        cout << "gosu";
}