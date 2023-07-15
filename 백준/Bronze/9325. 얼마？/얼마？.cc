#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int s, n;
        cin >> s >> n;

        while (n--)
        {
            int q, p;
            cin >> q >> p;
            s += q * p;
        }

        cout << s << endl;
    }
}