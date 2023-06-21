#include <iostream>
using namespace std;

int main()
{
    int N, F;
    cin >> N >> F;

    int i;
    for (i = 0; i < 100; i++)
    {
        int tmp = N / 100 * 100 + i;
        if (tmp % F == 0)
            break;
    }

    cout.width(2), cout.fill('0');
    cout << i;
}