#include <iostream>
using namespace std;

int main()
{
    int lv;
    string s;
    cin >> lv >> s;

    if (s == "miss")
    {
        cout << 0;
    }
    else if (s == "bad")
    {
        cout << lv * 200;
    }
    else if (s == "cool")
    {
        cout << lv * 400;
    }
    else if (s == "great")
    {
        cout << lv * 600;
    }
    else if (s == "perfect")
    {
        cout << lv * 1000;
    }
}