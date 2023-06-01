#include <iostream>
using namespace std;

int main()
{
    while (true)
    {
        string N;
        cin >> N;

        if (N == "0")
            break;

        int res = 0;
        for (char c : N)
        {
            if (c == '0')
                res += 4;
            else if (c == '1')
                res += 2;
            else
                res += 3;
        }

        cout << res + N.size() + 1 << endl;
    }
}