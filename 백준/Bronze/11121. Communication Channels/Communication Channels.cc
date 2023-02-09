#include <iostream>
using namespace std;

int main()
{
    int T;
    cin >> T;

    while (T--)
    {
        string a, b;
        cin >> a >> b;
        cout << (a == b ? "OK" : "ERROR") << endl;
    }
}