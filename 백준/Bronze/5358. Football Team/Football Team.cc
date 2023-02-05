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

        for (char ch : str)
        {
            if (ch == 'i')
                cout << 'e';
            else if (ch == 'e')
                cout << 'i';
            else if (ch == 'I')
                cout << 'E';
            else if (ch == 'E')
                cout << 'I';
            else
                cout << ch;
        }
        cout << endl;
    }
}