#include <iostream>
using namespace std;

int main()
{
    string str;
    cin >> str;

    int cnt0 = 0, cnt1 = 0, prev = -1;
    for (char ch : str)
    {
        if (ch == '0')
        {
            if (prev == 0)
                continue;
            cnt0++;
            prev = 0;
        }
        else
        {
            if (prev == 1)
                continue;
            cnt1++;
            prev = 1;
        }
    }

    cout << min(cnt0, cnt1);
}