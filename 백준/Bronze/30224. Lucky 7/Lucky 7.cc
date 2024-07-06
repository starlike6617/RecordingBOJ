#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    string s = to_string(n);
    int res = 0;

    if (n % 7 == 0)
        res++;

    if (s.find('7') != string::npos)
        res += 2;

    cout << res;
}