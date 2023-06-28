#include <iostream>
using namespace std;

int main()
{
    int V;
    string s;
    cin >> V >> s;

    int cnt = 0;
    for (char c : s)
    {
        if (c == 'A')
            cnt++;
        else
            cnt--;
    }

    if (cnt > 0)
        cout << "A";
    else if (cnt < 0)
        cout << "B";
    else
        cout << "Tie";
}