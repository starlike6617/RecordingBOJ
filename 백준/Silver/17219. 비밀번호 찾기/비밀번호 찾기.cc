#include <iostream>
#include <map>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n, m;
    cin >> n >> m;

    map<string, string> site;
    string addr, pass;

    for (int i = 0; i < n; i++)
    {
        cin >> addr >> pass;
        site[addr] = pass;
    }

    for (int i = 0; i < m; i++)
    {
        string str;
        cin >> str;
        cout << site[str] << '\n';
    }
}