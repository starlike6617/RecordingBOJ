#include <iostream>
using namespace std;

int main()
{
    int Ca, Ba, Pa, Cr, Br, Pr;
    cin >> Ca >> Ba >> Pa >> Cr >> Br >> Pr;

    int sum = 0;
    if (Ca < Cr)
        sum += Cr - Ca;
    if (Ba < Br)
        sum += Br - Ba;
    if (Pa < Pr)
        sum += Pr - Pa;

    cout << sum;
}