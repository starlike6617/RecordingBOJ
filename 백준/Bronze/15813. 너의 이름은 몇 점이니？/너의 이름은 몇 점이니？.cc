#include <iostream>
using namespace std;

int main()
{
    int n;
    string s;
    cin >> n >> s;

    int res = 0;
    for (char c : s)
    {
        res += c - 'A' + 1;
    }
    cout << res;
}