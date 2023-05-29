#include <iostream>
using namespace std;

int main()
{
    int res = 0;
    for (int i = 0; i < 4; i++)
    {
        string str;
        int x;
        cin >> str >> x;

        if (str == "Es")
            res += x * 21;
        else if (str == "Stair")
            res += x * 17;
    }
    cout << res;
}