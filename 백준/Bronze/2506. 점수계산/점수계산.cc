#include <iostream>
using namespace std;

int main()
{
    int N;
    cin >> N;

    int res = 0, cur = 0;
    while (N--)
    {
        int a;
        cin >> a;

        if (a == 1)
            cur++;
        else
            cur = 0;

        res += cur;
    }
    cout << res;
}