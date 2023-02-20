#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    while (n--)
    {
        int i, f;
        cin >> i >> f;

        if ((i <= 1 && f <= 2) || (i <= 2 && f <= 1))
            cout << "Yes" << endl;
        else
            cout << "No" << endl;
    }
}