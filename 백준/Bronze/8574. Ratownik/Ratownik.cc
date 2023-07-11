#include <iostream>
using namespace std;

int main()
{
    int n, k, x, y;
    cin >> n >> k >> x >> y;

    int cnt = 0;
    while (n--)
    {
        int xi, yi;
        cin >> xi >> yi;

        if ((x - xi) * (x - xi) + (y - yi) * (y - yi) > k * k)
        {
            cnt++;
        }
    }
    cout << cnt;
}