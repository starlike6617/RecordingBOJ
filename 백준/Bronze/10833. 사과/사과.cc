#include <iostream>
using namespace std;

int main()
{
    int N;
    cin >> N;

    int res = 0;
    while (N--)
    {
        int a, b;
        cin >> a >> b;
        res += b % a;
    }

    cout << res;
}