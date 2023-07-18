#include <iostream>
using namespace std;

int main()
{
    string s;
    getline(cin, s);

    for (char c : s)
    {
        if ('A' <= c && c <= 'Z')
        {
            printf("%02d", c - 'A' + 27);
        }
        else if ('a' <= c && c <= 'z')
        {
            printf("%02d", c - 'a' + 1);
        }
        else if ('0' <= c && c <= '9')
        {
            cout << '#' << c;
        }
        else
        {
            cout << c;
        }
    }
}