#include <iostream>
#include <set>
#define endl '\n'
using namespace std;

int main()
{
    set<string> s;
    for (int i = 0; i < 4; i++)
    {
        string str;
        cin >> str;
        s.insert(str);
    }

    for (auto i : s)
    {
        for (auto j : s)
        {
            cout << i << ' ' << j << endl;
        }
    }
}