#include <iostream>
using namespace std;

int main()
{
    for (int i = 0;; i++)
    {
        string str;
        getline(cin, str);
        if (cin.eof())
        {
            cout << i;
            break;
        }
    }
}