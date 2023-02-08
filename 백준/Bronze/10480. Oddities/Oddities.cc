#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    while (n--)
    {
        int x;
        cin >> x;

        cout << x << " is ";
        if (x % 2 == 0)
            cout << "even" << endl;
        else
            cout << "odd" << endl;
    }
}