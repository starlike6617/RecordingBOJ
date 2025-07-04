#include <iostream>
#define endl '\n'
using namespace std;

int main()
{
    while (true)
    {
        string s;
        getline(cin, s);

        if (s == "EOI")
        {
            break;
        }

        for (char &c : s)
        {
            c = tolower(c);
        }

        cout << (s.find("nemo") != string::npos ? "Found" : "Missing") << endl;
    }
}