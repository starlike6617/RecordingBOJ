#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        int res = 0;
        for (int j = 0; j < n; j++)
        {
            int tmp;
            cin >> tmp;
            res = max(res, tmp);
        }
        sum += res;
    }
    cout << sum;
}