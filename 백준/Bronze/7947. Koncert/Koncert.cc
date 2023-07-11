#include <iostream>
using namespace std;

int main()
{
    int z;
    cin >> z;

    while (z--)
    {
        double sum[3] = {};
        for (int i = 0; i < 10; i++)
        {
            int r, g, b;
            cin >> r >> g >> b;

            sum[0] += r;
            sum[1] += g;
            sum[2] += b;
        }
        cout << (int)(sum[0] / 10 + 0.5) << ' ' << (int)(sum[1] / 10 + 0.5) << ' ' << (int)(sum[2] / 10 + 0.5) << '\n';
    }
}