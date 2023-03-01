#include <iostream>
using namespace std;

int main()
{
    int N, P, res;
    cin >> N >> P;

    if (N >= 20)
        res = min(P - 2000, P * 3 / 4);
    else if (N >= 15)
        res = min(P * 9 / 10, P - 2000);
    else if (N >= 10)
        res = min(P - 500, P * 9 / 10);
    else if (N >= 5)
        res = P - 500;
    else
        res = P;

    if (res < 0)
        cout << 0;
    else
        cout << res;
}