#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int N;
    cin >> N;

    string s = "";
    while (N)
    {
        s += (char)(N % 2 + '0');
        N /= 2;
    }

    reverse(s.begin(), s.end());

    int res = 0;
    while (s.size())
    {
        res *= 2;
        res += s.back() - '0';
        s.pop_back();
    }

    cout << res;
}