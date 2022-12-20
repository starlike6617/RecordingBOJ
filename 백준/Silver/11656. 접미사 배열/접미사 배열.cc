#include <iostream>
#include <algorithm>
using namespace std;

bool comp(string a, string b)
{
    return a < b;
}

int main()
{
    string str;
    cin >> str;

    string arr[str.size()];
    for (int i = 0; i < str.size(); i++)
        arr[i] = str.substr(i);

    sort(arr, arr + str.size(), comp);

    for (string i : arr)
        cout << i << '\n';
}