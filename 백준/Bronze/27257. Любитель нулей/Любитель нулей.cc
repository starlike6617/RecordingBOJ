#include <iostream>
using namespace std;

int main()
{
    string str;
    cin >> str;

    while (!str.empty() && str.back() == '0')
        if (str.back() == '0')
            str.pop_back();

    if (str.empty())
        cout << 0;
    else
    {
        int cnt = 0;
        for (char c : str)
            if (c == '0')
                cnt++;
        cout << cnt;
    }
}