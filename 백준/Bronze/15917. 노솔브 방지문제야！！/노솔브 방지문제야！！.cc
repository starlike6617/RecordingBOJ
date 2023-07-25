#include <iostream>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int Q;
    cin >> Q;

    while (Q--)
    {
        int a;
        cin >> a;

        if ((a & -a) == a)
        {
            cout << 1 << '\n';
        }
        else
        {
            cout << 0 << '\n';
        }
    }
}