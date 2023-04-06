#include <iostream>
using namespace std;

int main()
{
    int N;
    cin >> N;

    int arr[N];
    for (int i = 0; i < N; i++)
        cin >> arr[i];

    int set = 0, cnt = 0, res = 0;
    for (int i = 1; i < N; i++)
    {
        if (arr[set] >= arr[i])
            cnt++;
        else
        {
            set = i;
            cnt = 0;
        }
        res = max(res, cnt);
    }
    cout << res;
}