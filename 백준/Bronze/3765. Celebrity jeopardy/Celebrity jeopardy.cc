#include <iostream>
using namespace std;

int main()
{
    while (1)
    {
        string str;
        getline(cin, str);

        if (cin.eof() == true)
            break;

        cout << str << endl;
    }
}