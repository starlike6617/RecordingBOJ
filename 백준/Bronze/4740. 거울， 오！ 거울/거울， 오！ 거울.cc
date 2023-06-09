#include <iostream>
using namespace std;

int main()
{
    while (true)
    {
        string s;
        getline(cin, s);

        if (s == "***")
            break;

        for (int i = s.size() - 1; i >= 0; i--)
            cout << s[i];
        cout << endl;
    }
}