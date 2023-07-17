#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;

    int cnt = 0;
    while (t--)
    {
        double a, b, c, d;
        cin >> a >> b >> c >> d;

        if (d <= 7 && ((a <= 56 && b <= 45 && c <= 25) || (a + b + c <= 125)))
        {
            cout << 1 << endl;
            cnt++;
        }
        else
        {
            cout << 0 << endl;
        }
    }
    cout << cnt;
}