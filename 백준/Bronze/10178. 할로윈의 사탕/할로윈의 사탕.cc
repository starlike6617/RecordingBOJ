#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    while (n--)
    {
        int c, v;
        cin >> c >> v;

        cout << "You get " << c / v << " piece(s) and your dad gets " << c % v << " piece(s)." << endl;
    }
}