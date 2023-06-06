#include <iostream>
using namespace std;

int main()
{
    while (true)
    {
        int a, b;
        char c;
        cin >> a >> c >> b;

        if (a == 0 && c == 'W' && b == 0)
            break;

        if (c == 'D')
            cout << a + b << endl;
        else if (c == 'W' && a - b >= -200)
            cout << a - b << endl;
        else
            cout << "Not allowed" << endl;
    }
}