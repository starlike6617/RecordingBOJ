#include <iostream>
#include <map>
#include <string>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n, m;
    cin >> n >> m;

    map<string, int> pokedex1;
    map<int, string> pokedex2;
    for (int i = 0; i < n; i++)
    {
        string name;
        cin >> name;

        pokedex1[name] = i + 1;
        pokedex2[i + 1] = name;
    }

    for (int i = 0; i < m; i++)
    {
        string guess;
        cin >> guess;

        if (isdigit(guess[0]))
            cout << pokedex2[stoi(guess)] << '\n';
        else
            cout << pokedex1[guess] << '\n';
    }
}