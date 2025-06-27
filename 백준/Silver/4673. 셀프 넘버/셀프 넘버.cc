#include <iostream>
#include <vector>
#define endl '\n'
using namespace std;

int main()
{
    vector<bool> v(10001, true);

    for (int i = 1; i <= 10000; i++)
    {
        int n = i, sum = i;
        while (n > 0)
        {
            sum += n % 10;
            n /= 10;
        }

        v[sum] = false;
    }

    for (int i = 1; i < 10001; i++)
    {
        if (v[i])
        {
            cout << i << endl;
        }
    }
}