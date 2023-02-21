#include <iostream>
using namespace std;

int main()
{
    string str;
    cin >> str;

    int idx = 0;
    while (idx < str.size() - 1)
    {
        cout << str[idx];
        idx += str[idx] - 'A' + 1;
    }

    if (idx >= str.size() - 1)
        cout << str[str.size() - 1];
}