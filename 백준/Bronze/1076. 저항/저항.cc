#include <iostream>
using namespace std;

int num(string c)
{
    if (c == "black")
        return 0;
    else if (c == "brown")
        return 1;
    else if (c == "red")
        return 2;
    else if (c == "orange")
        return 3;
    else if (c == "yellow")
        return 4;
    else if (c == "green")
        return 5;
    else if (c == "blue")
        return 6;
    else if (c == "violet")
        return 7;
    else if (c == "grey")
        return 8;
    else if (c == "white")
        return 9;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    string c1, c2, c3;
    cin >> c1 >> c2 >> c3;

    int res = num(c1) * 10 + num(c2);
    cout << res;

    if (res)
        for (int i = 0; i < num(c3); i++)
            cout << 0;
}