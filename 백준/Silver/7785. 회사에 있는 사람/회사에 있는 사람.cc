#include <iostream>
#include <map>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int n;
    cin >> n;

    map<string, bool> m;
    while (n--)
    {
        string name, act;
        cin >> name >> act;

        m[name] = false;

        if (act == "enter")
            m[name] = true;
        else if (act == "leave" && m[name] == true)
            m[name] = false;
    }

    vector<string> v;
    for (auto i = m.begin(); i != m.end(); i++)
        if (i->second == true)
            v.push_back(i->first);

    sort(v.begin(), v.end(), greater<string>());
    for (string s : v)
        cout << s << '\n';
}