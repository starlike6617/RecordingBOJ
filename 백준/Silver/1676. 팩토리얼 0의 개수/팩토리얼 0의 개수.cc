#include <iostream>
using namespace std;

int main()
{
    int num, cnt2 = 0, cnt5 = 0;
    cin >> num;

    for (int i = num; i > 1; i--)
    {
        int n = i;
        while ((n % 2 == 0 || n % 5 == 0) && n != 0)
        {
            if (n % 2 == 0 && n != 0)
            {
                n /= 2;
                cnt2++;
            }
            if (n % 5 == 0 && n != 0)
            {
                n /= 5;
                cnt5++;
            }
        }
    }

    cout << min(cnt2, cnt5);
}