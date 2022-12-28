#include <iostream>
using namespace std;

int main()
{
    int n, cnt = 0;
    cin >> n;

    while (n >= 0)
    {
        if (n % 5 == 0)
        {
            cnt += n / 5;
            break;
        }

        n -= 3;
        cnt++;
    }
    if (n < 0)
        cnt = -1;

    cout << cnt;
}