#include <iostream>
#include <vector>
#include <set>
#define endl '\n'
using namespace std;

int main()
{
    int L;
    string str;
    cin >> L >> str;

    int x = 0, y = 0;
    set<pair<int, int>> s;
    s.insert({0, 0});

    for (char c : str)
    {
        if (c == 'E')
        {
            x++;
        }
        else if (c == 'W')
        {
            x--;
        }
        else if (c == 'S')
        {
            y--;
        }
        else
        {
            y++;
        }

        s.insert({x, y});
    }

    cout << s.size();
}