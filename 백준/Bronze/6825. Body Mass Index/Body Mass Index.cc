#include <iostream>
using namespace std;

int main()
{
    double w, h;
    cin >> w >> h;

    if (w > 25 * h * h)
        cout << "Overweight";
    else if (18.5 * h * h <= w && w <= 25 * h * h)
        cout << "Normal weight";
    else
        cout << "Underweight";
}