#include <iostream>
using namespace std;

int main()
{
    int n, T;
    cin >> n >> T;

    int cnt = 0;
    while (n--)
    {
        int a;
        cin >> a;

        if (T >= a)
        {
            T -= a;
            cnt++;
        }
        else
        {
            break;
        }
    }
    cout << cnt;
}