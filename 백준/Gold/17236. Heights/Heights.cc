#include <bits/stdc++.h>
using namespace std;

int main()
{
    double ha, hb, hc;
    cin >> ha >> hb >> hc;

    double a = 1 / ha;
    double b = 1 / hb;
    double c = 1 / hc;

    double s = sqrt(1 / (a + b + c) / (b + c - a) / (a - b + c) / (a + b - c));

    cout << fixed;
    cout.precision(5);
    cout << s;
}