#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;

        int sumEven = 0, sumOdd = 0;
        while (n--)
        {
            int x;
            cin >> x;

            if (x % 2 == 0)
                sumEven += x;
            else
                sumOdd += x;
        }

        if (sumEven > sumOdd)
            cout << "EVEN" << endl;
        else if (sumEven < sumOdd)
            cout << "ODD" << endl;
        else
            cout << "TIE" << endl;
    }
}