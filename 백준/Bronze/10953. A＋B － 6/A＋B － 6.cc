#include <iostream>
using namespace std;

int main()
{
    int T;
    cin >> T;

    while (T--)
    {
        string str;
        cin >> str;
        cout << str[0] - '0' + str[2] - '0' << endl;
    }
}