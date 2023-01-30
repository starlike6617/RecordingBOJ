#include <iostream>
using namespace std;

int main()
{
    int arr[6], sum = 0;
    for (int i = 0; i < 6; i++)
    {
        cin >> arr[i];
        sum += arr[i];
    }
    cout << sum * 5;
}