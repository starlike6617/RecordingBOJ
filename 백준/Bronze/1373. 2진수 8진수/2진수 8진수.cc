#include <iostream>
using namespace std;

char binToOct(string s)
{
    if (s == "000")
        return '0';
    else if (s == "001")
        return '1';
    else if (s == "010")
        return '2';
    else if (s == "011")
        return '3';
    else if (s == "100")
        return '4';
    else if (s == "101")
        return '5';
    else if (s == "110")
        return '6';
    else if (s == "111")
        return '7';
}

int main()
{
    string s;
    cin >> s;

    while (s.size() % 3)
    {
        s = '0' + s;
    }

    string res = "";
    for (int i = 0; i < s.size(); i += 3)
    {
        res += binToOct(s.substr(i, 3));
    }
    cout << res;
}