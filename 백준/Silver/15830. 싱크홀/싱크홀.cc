#include <iostream>
using namespace std;

int main()
{
    double V, W, D;
    cin >> V >> W >> D;

    double t = W / V;
    double h = 5 * t * t;

    int cnt = 0;
    double res = h;
    while (res < D)
    {
        h = h * 25 / 16;
        res += h;
        cnt++;
    }

    cout << cnt;
}