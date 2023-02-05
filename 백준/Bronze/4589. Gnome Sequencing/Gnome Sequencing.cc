#include <iostream>
using namespace std;

int main()
{
    int N;
    cin >> N;

    cout << "Gnomes:" << endl;

    while (N--)
    {
        int a, b, c;
        cin >> a >> b >> c;

        if ((a < b && b < c) || (a > b && b > c))
            cout << "Ordered" << endl;
        else
            cout << "Unordered" << endl;
    }
}