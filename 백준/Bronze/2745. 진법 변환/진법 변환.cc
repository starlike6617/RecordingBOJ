#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    string s;
    int N;
    cin >> s >> N;

    int res = 0;
    for (int i = 0; i < s.size(); i++)
    {
        if ('A' <= s[i] && s[i] <= 'Z')
        {
            res += (s[i] - 'A' + 10) * pow(N, s.size() - i - 1);
        }
        else
        {
            res += (s[i] - '0') * pow(N, s.size() - i - 1);
        }
    }
    cout << res;
}