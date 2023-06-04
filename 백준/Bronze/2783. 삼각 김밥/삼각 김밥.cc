#include <iostream>
using namespace std;

int main()
{
    double X, Y;
    cin >> X >> Y;

    double minPrice = X / Y;

    int N;
    cin >> N;

    while (N--)
    {
        double Xi, Yi;
        cin >> Xi >> Yi;
        minPrice = min(minPrice, Xi / Yi);
    }

    cout << fixed;
    cout.precision(2);
    cout << minPrice * 1000;
}