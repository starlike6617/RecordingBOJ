#include <iostream>
using namespace std;

int main()
{
    double M, S, G, A, B, L, R;
    cin >> M >> S >> G >> A >> B >> L >> R;

    double t1, t2;
    t1 = L / A + M / G;
    t2 = R / B + M / S;

    if (t1 < t2)
        cout << "friskus";
    else
        cout << "latmask";
}