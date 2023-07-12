#include <iostream>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int t;
    cin >> t;

    while (t--)
    {
        int x, w;
        cin >> x >> w;

        int cnt = 0;
        while (x < w)
        {
            x *= 2;
            cnt++;
        }
        cout << cnt << '\n';
    }
}