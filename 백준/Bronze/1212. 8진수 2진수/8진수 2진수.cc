#include <iostream>
using namespace std;

int main()
{
    string n;
    cin >> n;

    string res = "";

    if (n == "0")
    {
        cout << "0";
        return 0;
    }

    for (char c : n)
    {
        if (c == '0')
            res += "000";
        else if (c == '1')
            res += "001";
        else if (c == '2')
            res += "010";
        else if (c == '3')
            res += "011";
        else if (c == '4')
            res += "100";
        else if (c == '5')
            res += "101";
        else if (c == '6')
            res += "110";
        else if (c == '7')
            res += "111";
    }

    for (int i = 0; i < res.size(); i++)
        if (res[i] == '1')
        {
            cout << res.substr(i);
            break;
        }
}