#include <iostream>
using namespace std;

int main()
{
    int res;
    cin >> res;

    while (true)
    {
        char c;
        cin >> c;

        if (c == '+')
        {
            int n;
            cin >> n;
            res += n;
        }
        else if (c == '-')
        {
            int n;
            cin >> n;
            res -= n;
        }
        else if (c == '*')
        {
            int n;
            cin >> n;
            res *= n;
        }
        else if (c == '/')
        {
            int n;
            cin >> n;
            res /= n;
        }
        else if (c == '=')
        {
            cout << res;
            break;
        }
    }
}