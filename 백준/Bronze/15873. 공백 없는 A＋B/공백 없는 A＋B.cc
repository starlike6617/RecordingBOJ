#include <iostream>
using namespace std;

int main()
{
    string str;
    cin >> str;

    if (str.size() == 2)
        cout << str[0] - '0' + str[1] - '0';
    else if (str.size() == 3)
    {
        if (str[1] == '0')
            cout << 10 + str[2] - '0';
        else
            cout << str[0] - '0' + 10;
    }
    else
        cout << 20;
}