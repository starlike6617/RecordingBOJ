#include <iostream>
using namespace std;

int main()
{
    while (1)
    {
        string str;
        int a, w;
        cin >> str >> a >> w;

        if (str == "#")
            break;

        cout << str << ' ' << (a > 17 || w >= 80 ? "Senior" : "Junior") << endl;
    }
}