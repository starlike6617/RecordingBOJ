#include <iostream>
using namespace std;

int main()
{
    string s;
    cin >> s;

    for (char c : s)
    {
        if (c == 'a')
            cout << 4;
        else if (c == 'e')
            cout << 3;
        else if (c == 'i')
            cout << 1;
        else if (c == 'o')
            cout << 0;
        else if (c == 's')
            cout << 5;
        else
            cout << c;
    }
}