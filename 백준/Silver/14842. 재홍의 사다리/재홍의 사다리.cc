#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

int main()
{
    double W, H, N;
    cin >> W >> H >> N;

    double T = ((int)N - 1) / 2;
    double S = 2 * H * T * (N - T - 1) / N;

    cout << fixed;
    cout.precision(6);
    cout << S;
}