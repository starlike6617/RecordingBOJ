#include <iostream>
#include <vector>
#include <algorithm>
#define endl '\n'
using namespace std;

int main()
{
    vector<int> v(5);
    for (int i = 0; i < 5; i++)
    {
        cin >> v[i];
    }
    cout << v[0] * v[1] - v[2] * v[3] * v[4];
}