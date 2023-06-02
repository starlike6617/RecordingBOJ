#include <iostream>
using namespace std;

int main()
{
    int N;
    cin >> N;

    int res = 1;
    while (N--)
    {
        int a;
        cin >> a;
        res += a - 1;
    }
    cout << res;
}