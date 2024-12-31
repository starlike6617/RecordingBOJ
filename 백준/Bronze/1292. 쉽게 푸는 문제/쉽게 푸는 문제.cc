#include <iostream>
#include <vector>
#include <algorithm>
#define endl '\n'
using namespace std;

int main()
{
    vector<int> v(1001);
    int idx = 1;

    for (int i = 1; idx < 1001; i++)
    {
        for (int j = 0; j < i; j++)
        {
            v[idx++] = i;
            if (idx == 1001)
            {
                break;
            }
        }
    }

    int A, B;
    cin >> A >> B;

    int res = 0;
    for (int i = A; i <= B; i++)
    {
        res += v[i];
    }

    cout << res;
}