#include <iostream>
using namespace std;

int main()
{
    int N;
    cin >> N;

    while (N--)
    {
        string s;
        cin >> s;

        int a = 0;
        for (char c : s)
        {
            a += c - '0';
        }

        int b = (s[s.size() - 1] - '0') * 10 + (s[s.size() - 2] - '0') * 100 + (s[s.size() - 3] - '0') * 1000;

        int res = a + b;
        if (res >= 10000)
        {
            res %= 10000;
        }
        else if (res < 1000)
        {
            res += 1000;
        }
        printf("%04d\n", res);
    }
}