#include <iostream>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int z;
    cin >> z;

    while (z--)
    {
        int a, b;
        cin >> a >> b;

        if (b % a == 0)
        {
            cout << "TAK" << '\n';
        }
        else
        {
            cout << "NIE" << '\n';
        }
    }
}