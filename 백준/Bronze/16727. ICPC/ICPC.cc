#include <iostream>
using namespace std;

int main()
{
    int p1, s1, s2, p2, res;
    cin >> p1 >> s1 >> s2 >> p2;

    if (p1 + p2 > s1 + s2)
        res = 0;
    else if (p1 + p2 < s1 + s2)
        res = 1;
    else if (p2 > s1)
        res = 0;
    else if (p2 < s1)
        res = 1;
    else
        res = -1;

    if (res == 0)
        cout << "Persepolis";
    else if (res == 1)
        cout << "Esteghlal";
    else
        cout << "Penalty";
}