#include <iostream>
using namespace std;

int main()
{
    double x;
    cin >> x;

    double ans = 100000 * 3.785411784 / 1609.344 / x;
    printf("%.6lf", ans);
}