#include <iostream>
using namespace std;

int main()
{
    int T;
    cin >> T;

    while (T--)
    {
        int a, b, c;
        cin >> a >> b >> c;
        cout << min(a, min(b, c)) << endl;
    }
}