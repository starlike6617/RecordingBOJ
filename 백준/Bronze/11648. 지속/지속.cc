#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int cnt = 0;
    while (n >= 10)
    {
        int tmp = 1;
        while (n)
        {
            tmp *= n % 10;
            n /= 10;
        }

        n = tmp;
        cnt++;
    }
    cout << cnt;
}