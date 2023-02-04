#include <iostream>
using namespace std;

int main()
{
    int A, B, C, D;
    cin >> A >> B >> C >> D;

    int t, h, m, s;
    t = A * 3600 + B * 60 + C + D;
    s = t % 60;
    m = t % 3600 / 60 % 60;
    h = (t % 3600 / 60 / 60 + t / 3600) % 24;

    cout << h << ' ' << m << ' ' << s;
}