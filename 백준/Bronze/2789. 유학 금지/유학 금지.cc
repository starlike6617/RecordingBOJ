#include <iostream>
using namespace std;

int main()
{
    string s;
    cin >> s;

    for (char c : s)
    {
        if (c != 'C' && c != 'A' && c != 'M' && c != 'B' && c != 'R' && c != 'I' && c != 'D' && c != 'G' && c != 'E')
        {
            cout << c;
        }
    }
}