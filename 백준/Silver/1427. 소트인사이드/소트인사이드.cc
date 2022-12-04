#include <iostream>
#include <algorithm>
using namespace std;

bool desc(int x, int y)
{
    return x > y;
}

int main()
{
    string str;
    cin >> str;

    int arr[str.size()];
    for (int i = 0; i < str.size(); i++)
        arr[i] = (int)str[i];

    sort(arr, arr + str.size(), desc);

    for (int i = 0; i < str.size(); i++)
        cout << arr[i] - 48;
}