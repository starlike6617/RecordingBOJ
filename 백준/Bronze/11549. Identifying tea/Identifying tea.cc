#include <iostream>
using namespace std;

int main()
{
    int T;
    cin >> T;

    int arr[5], cnt = 0;
    for (int i = 0; i < 5; i++)
    {
        cin >> arr[i];
        if (arr[i] == T)
            cnt++;
    }

    cout << cnt;
}