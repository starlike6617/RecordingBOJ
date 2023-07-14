#include <iostream>
using namespace std;

int main()
{
    int Z;
    cin >> Z;

    while (Z--)
    {
        int n;
        string s;
        cin >> n >> s;

        int x = 0, y = 0;
        for (char c : s)
        {
            if (c == 'N')
                y++;
            else if (c == 'S')
                y--;
            else if (c == 'E')
                x++;
            else if (c == 'W')
                x--;
        }
        cout << abs(x) + abs(y) << endl;
    }
}