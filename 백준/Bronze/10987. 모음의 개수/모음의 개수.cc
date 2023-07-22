#include <iostream>
using namespace std;

int main()
{
    string s;
    cin >> s;

    int cnt = 0;
    for (char c : s)
    {
        if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u')
        {
            cnt++;
        }
    }
    cout << cnt;
}