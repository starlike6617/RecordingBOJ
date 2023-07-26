#include <iostream>
#include <map>
using namespace std;

int main()
{
    int n;
    cin >> n;

    map<string, int> m;
    while (n--)
    {
        string s;
        cin >> s;

        if ((m.find(s) == m.end()) && (s.size() >= 6) && (s.substr(s.size() - 6) == "Cheese"))
        {
            m[s] = 1;
        }
    }

    int cnt = 0;
    for (auto it : m)
    {
        cnt++;
    }

    if (cnt >= 4)
    {
        cout << "yummy";
    }
    else
    {
        cout << "sad";
    }
}