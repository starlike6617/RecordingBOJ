#include <iostream>
using namespace std;

int main()
{
    string s;
    cin >> s;

    while (s.size() % 3 != 0)
    {
        s = "0" + s;
    }

    for (int i = 0; i < s.size(); i += 3)
    {
        int n = 0;
        n += (s[i] - '0') * 4;
        n += (s[i + 1] - '0') * 2;
        n += (s[i + 2] - '0') * 1;
        cout << n;
    }
}