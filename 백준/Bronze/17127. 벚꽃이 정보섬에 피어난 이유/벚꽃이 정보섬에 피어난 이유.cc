#include <iostream>
using namespace std;

int arr[10];

int multi(int a, int b)
{
    int res = 1;
    for (int i = a; i <= b; i++)
        res *= arr[i];
    return res;
}

int main()
{
    int n;
    cin >> n;

    for (int i = 0; i < n; i++)
        cin >> arr[i];

    int sum, max = 0;
    for (int i = 0; i < n; i++)
        for (int j = i + 1; j < n; j++)
            for (int k = j + 1; k < n; k++)
                for (int l = k + 1; l < n; l++)
                {
                    sum = multi(0, i) + multi(i + 1, j) + multi(j + 1, k) + multi(k + 1, n - 1);
                    if (max < sum)
                        max = sum;
                }

    cout << max;
}