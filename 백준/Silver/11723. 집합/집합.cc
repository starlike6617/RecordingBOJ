#include <iostream>
#define endl '\n'
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int M;
    cin >> M;

    int S = 0;
    while (M--)
    {
        string str;
        cin >> str;

        if (str == "add")
        {
            int x;
            cin >> x;
            S |= (1 << x);
        }
        else if (str == "remove")
        {
            int x;
            cin >> x;
            S &= ~(1 << x);
        }
        else if (str == "check")
        {
            int x;
            cin >> x;
            cout << ((S & (1 << x)) ? 1 : 0) << endl;
        }
        else if (str == "toggle")
        {
            int x;
            cin >> x;
            S ^= (1 << x);
        }
        else if (str == "all")
        {
            S = (1 << 21) - 1;
        }
        else if (str == "empty")
        {
            S = 0;
        }
    }
}