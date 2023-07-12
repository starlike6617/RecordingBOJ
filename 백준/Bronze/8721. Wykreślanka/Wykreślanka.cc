#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int res = 0;
    int cnt = 1;

    while (n--)
    {
        int num;
        cin >> num;

        if (num == cnt)
        {
            cnt++;
        }
        else
        {
            res++;
        }
    }

    cout << res;
}