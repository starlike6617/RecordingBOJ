#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    double a, b, c;
    cin >> a >> b >> c;
    cout << (int)sqrt((a * a * b * b / (b * b + c * c))) << ' ' << (int)sqrt((a * a * c * c / (b * b + c * c)));
}