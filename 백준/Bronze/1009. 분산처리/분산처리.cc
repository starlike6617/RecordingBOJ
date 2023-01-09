#include <iostream>
using namespace std;

int main()
{
    int T;
    cin >> T;

    while (T--)
    {
        int a, b, ans = 1;
        cin >> a >> b;

        while (b--)
            ans = (ans * a) % 10;

        cout << (ans == 0 ? 10 : ans) << endl;
    }
}