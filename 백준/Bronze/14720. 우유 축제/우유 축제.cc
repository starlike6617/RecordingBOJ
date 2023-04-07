#include <iostream>
using namespace std;

int main()
{
    int N;
    cin >> N;

    int arr[N];
    for (int i = 0; i < N; i++)
        cin >> arr[i];

    int milk = 0, cnt = 0;
    for (int i = 0; i < N; i++)
        if (arr[i] == milk % 3)
        {
            cnt++;
            milk++;
        }
    cout << cnt;
}