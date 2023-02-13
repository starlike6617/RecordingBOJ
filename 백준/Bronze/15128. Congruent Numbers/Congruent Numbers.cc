#include <iostream>
using namespace std;

int main()
{
    long long p1, q1, p2, q2;
    cin >> p1 >> q1 >> p2 >> q2;

    bool area = false;
    if ((p1 * p2) % (q1 * q2 * 2) == 0)
        area = true;
    cout << area;
}