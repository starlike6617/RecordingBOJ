#include <iostream>
#define pi 3.1415926535
using namespace std;

int main()
{
    int n;
    cin >> n;

    while (n--)
    {
        int A1, P1, R1, P2;
        cin >> A1 >> P1 >> R1 >> P2;

        if (A1 / P1 > pi * R1 * R1 / P2)
            cout << "Slice of pizza" << endl;
        else
            cout << "Whole pizza" << endl;
    }
}