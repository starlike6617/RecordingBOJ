#include <iostream>
using namespace std;

int main()
{
    string str;
    cin >> str;

    for (char ch : str)
    {
        if (ch - 'A' < 27)
            ch = (char)(ch - 'A' + 'a');
        else
            ch = (char)(ch - 'a' + 'A');
        cout << ch;
    }
}