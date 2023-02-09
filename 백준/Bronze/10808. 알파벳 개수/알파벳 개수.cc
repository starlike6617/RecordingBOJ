#include <iostream>
using namespace std;

int main()
{
    string str;
    cin >> str;

    int arr[26] = {};
    for (char ch : str)
        arr[ch - 'a']++;

    for (int i : arr)
        cout << i << ' ';
}