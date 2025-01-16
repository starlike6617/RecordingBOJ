#include <iostream>
#include <vector>
#define endl '\n'
using namespace std;

int main()
{
    int N;
    cin >> N;

    vector<vector<char>> v(10, vector<char>(20, '.'));
    while (N--)
    {
        string s;
        cin >> s;

        char row = s[0];
        string col = s.substr(1);

        int x = row - 'A';
        int y = stoi(col) - 1;

        v[x][y] = 'o';
    }

    for (auto rowV : v)
    {
        for (char c : rowV)
        {
            cout << c;
        }
        cout << endl;
    }
}