#include <iostream>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int h, m, s;
    cin >> h >> m >> s;

    int t = h * 3600 + m * 60 + s;

    int q;
    cin >> q;

    while (q--)
    {
        int x;
        cin >> x;

        if (x == 1)
        {
            int c;
            cin >> c;
            t = (t + c) % (24 * 3600);
        }
        else if (x == 2)
        {
            int c;
            cin >> c;
            t = (t - c) % (24 * 3600);

            if (t < 0)
            {
                t += 24 * 3600;
            }
        }
        else
        {
            cout << t / 3600 << ' ' << t % 3600 / 60 << ' ' << t % 60 << '\n';
        }
    }
}