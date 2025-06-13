#include <iostream>
#include <vector>
#include <algorithm>
#define endl '\n'
using namespace std;

int main()
{
    while (true)
    {
        vector<int> v(3);
        for (int i = 0; i < 3; i++)
        {
            cin >> v[i];
        }

        if (v[0] == 0 && v[1] == 0 && v[2] == 0)
        {
            break;
        }

        sort(v.begin(), v.end());

        if (v[0] * v[0] + v[1] * v[1] == v[2] * v[2])
        {
            cout << "right" << endl;
        }
        else
        {
            cout << "wrong" << endl;
        }
    }
}