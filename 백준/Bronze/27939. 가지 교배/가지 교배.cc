#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    char arr1[n];
    for (int i = 0; i < n; i++)
        cin >> arr1[i];

    int m, k;
    cin >> m >> k;

    char arr2[m] = {};
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < k; j++)
        {
            int temp;
            cin >> temp;

            if (arr1[temp - 1] == 'P')
                arr2[i] = 'P';
        }
        if (arr2[i] != 'P')
            arr2[i] = 'W';
    }

    for (int i = 0; i < m; i++)
    {
        if (arr2[i] == 'W')
        {
            cout << 'W';
            break;
        }
        if (i == m - 1)
            cout << 'P';
    }
}