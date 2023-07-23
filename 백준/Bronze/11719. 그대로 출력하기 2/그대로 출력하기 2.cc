#include <iostream>
using namespace std;

int main()
{
    while (true)
    {
        string s;
        getline(cin, s);

        if (cin.eof())
        {
            break;
        }

        cout << s << endl;
    }
}