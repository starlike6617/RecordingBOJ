#include <iostream>
using namespace std;

int main()
{
    int n, day = 0, cnt = 0;
    cin >> n;

    int month[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    for (int i = 2019; i <= n; i++)
    {
        if (i % 400 == 0 || ((i % 100 != 0) && (i % 4 == 0)))
            month[1] = 29;
        else
            month[1] = 28;

        for (int j = 0; j < 12; j++)
        {
            if ((day + 13) % 7 == 4)
                cnt++;
            day = (day + month[j]) % 7;
        }
    }

    cout << cnt;
}