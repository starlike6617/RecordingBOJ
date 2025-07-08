#include <iostream>
#include <vector>
#include <algorithm>
#define endl '\n'
using namespace std;

int main()
{
    string s;
    cin >> s;

    vector<char> v;
    for (char c : s)
    {
        v.push_back(c);
    }

    sort(v.begin(), v.end(), greater<char>());

    for (char c : v)
    {
        cout << c;
    }
}