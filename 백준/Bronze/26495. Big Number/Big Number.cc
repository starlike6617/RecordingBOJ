#include <iostream>
using namespace std;

string zero[5] = {"0000", "0  0", "0  0", "0  0", "0000"};
string one[5] = {"   1", "   1", "   1", "   1", "   1"};
string two[5] = {"2222", "   2", "2222", "2", "2222"};
string three[5] = {"3333", "   3", "3333", "   3", "3333"};
string four[5] = {"4  4", "4  4", "4444", "   4", "   4"};
string five[5] = {"5555", "5", "5555", "   5", "5555"};
string six[5] = {"6666", "6", "6666", "6  6", "6666"};
string seven[5] = {"7777", "   7", "   7", "   7", "   7"};
string eight[5] = {"8888", "8  8", "8888", "8  8", "8888"};
string nine[5] = {"9999", "9  9", "9999", "   9", "   9"};

void num(int n)
{
    if (n == 0)
        for (int i = 0; i < 5; i++)
            cout << zero[i] << endl;
    else if (n == 1)
        for (int i = 0; i < 5; i++)
            cout << one[i] << endl;
    else if (n == 2)
        for (int i = 0; i < 5; i++)
            cout << two[i] << endl;
    else if (n == 3)
        for (int i = 0; i < 5; i++)
            cout << three[i] << endl;
    else if (n == 4)
        for (int i = 0; i < 5; i++)
            cout << four[i] << endl;
    else if (n == 5)
        for (int i = 0; i < 5; i++)
            cout << five[i] << endl;
    else if (n == 6)
        for (int i = 0; i < 5; i++)
            cout << six[i] << endl;
    else if (n == 7)
        for (int i = 0; i < 5; i++)
            cout << seven[i] << endl;
    else if (n == 8)
        for (int i = 0; i < 5; i++)
            cout << eight[i] << endl;
    else if (n == 9)
        for (int i = 0; i < 5; i++)
            cout << nine[i] << endl;
}

int main()
{
    string str;
    cin >> str;

    for (int i = 0; i < str.size(); i++)
    {
        num(str[i] - '0');
        if (i != str.size() - 1)
            cout << endl;
    }
}