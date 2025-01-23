#include <iostream>
using namespace std;

int main()
{
    int N;
    cin >> N;

    int res = 0;
    while (N--)
    {
        string s;
        cin >> s;
        res += s.size();
    }

    cout << res;
}