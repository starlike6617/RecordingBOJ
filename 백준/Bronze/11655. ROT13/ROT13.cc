#include <iostream>
using namespace std;

int main()
{
    string str;
    getline(cin, str);

    for (char c : str)
    {
        if (('A' <= c) && (c <= 'Z'))
            cout << (char)((c - 'A' + 13) % 26 + 'A');
        else if (('a' <= c) && (c <= 'z'))
            cout << (char)((c - 'a' + 13) % 26 + 'a');
        else
            cout << c;
    }
}