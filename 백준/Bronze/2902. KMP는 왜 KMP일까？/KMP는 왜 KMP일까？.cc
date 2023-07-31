#include <iostream>
using namespace std;

int main()
{
    string s;
    cin >> s;

    for (int i = 0; i < s.size(); i++)
    {
        if (i == 0 || s[i - 1] == '-')
        {
            cout << s[i];
        }
    }
}