#include <bits/stdc++.h>
using namespace std;

int main()
{
    double s1, s2, s3, s4;
    cin >> s1 >> s2 >> s3 >> s4;

    double s = (s1 + s2 + s3 + s4) / 2;
    double area = sqrt((s - s1) * (s - s2) * (s - s3) * (s - s4));

    cout << fixed;
    cout.precision(6);
    cout << area;
}