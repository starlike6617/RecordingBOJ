#include <iostream>
#include <set>
using namespace std;

int main()
{
    string str;
    cin >> str;

    set<string> s;
    for (int i = 0; i < str.size(); i++)
        for (int j = 1; j <= str.size() - i; j++)
            s.insert(str.substr(i, j));

    cout << s.size();
}