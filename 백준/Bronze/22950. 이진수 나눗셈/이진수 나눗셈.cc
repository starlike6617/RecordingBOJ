#include <iostream>
using namespace std;

int main()
{
    int n, k;
    cin >> n;

    string str;
    cin >> str >> k;

    if (str.find('1') == string::npos || k == 0)
    {
        cout << "YES";
        return 0;
    }

    bool res = true;
    for (int i = n - 1; k > 0; i--, k--)
    {
        if (str[i] == '1')
        {
            res = false;
            break;
        }
    }

    cout << (res ? "YES" : "NO");
}