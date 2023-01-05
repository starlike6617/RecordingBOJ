#include <iostream>
#include <stack>
using namespace std;

int main()
{
    int x, b, r;
    cin >> x >> b;

    bool isMinus = false;
    if (x < 0 && b > 0)
    {
        isMinus = true;
        x = -x;
    }

    stack<int> s;
    while (x != 0)
    {
        r = x % b;
        x = x / b;

        if (r < 0 && b < 0)
        {
            r += abs(b);
            x -= b / abs(b);
        }

        s.push(r);
    }

    if (s.empty())
        cout << 0;

    if (isMinus)
        cout << '-';

    while (!s.empty())
    {
        cout << s.top();
        s.pop();
    }
}