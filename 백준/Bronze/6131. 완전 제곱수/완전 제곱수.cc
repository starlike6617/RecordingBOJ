#include <iostream>
using namespace std;

int main()
{
    int N;
    cin >> N;

    int arr[501] = {};
    for (int i = 1; i < 501; i++)
    {
        arr[i] = i * i;
    }

    int cnt = 0;
    for (int i = 1; i < 501; i++)
    {
        for (int j = i + 1; j < 501; j++)
        {
            if (arr[j] - arr[i] == N)
            {
                cnt++;
            }
        }
    }
    cout << cnt;
}