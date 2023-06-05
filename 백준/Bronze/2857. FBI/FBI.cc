#include <iostream>
using namespace std;

int main()
{
    bool isFBI = false;
    for (int i = 0; i < 5; i++)
    {
        string s;
        cin >> s;

        if (s.find("FBI") != string::npos)
        {
            isFBI = true;
            cout << i + 1 << ' ';
        }
    }

    if (!isFBI)
        cout << "HE GOT AWAY!";
}