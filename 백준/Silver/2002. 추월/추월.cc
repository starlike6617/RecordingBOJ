#include <iostream>
#include <map>
#include <vector>
using namespace std;

int main()
{
    int n;
    cin >> n;

    map<string, int> m;
    for (int i = 0; i < n; i++)
    {
        string str;
        cin >> str;
        m.insert({str, i + 1});
    }

    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        string str;
        cin >> str;
        v[i] = m[str];
    }

    int cnt = n - 1;
    int temp = v[n - 1];
    for (int i = n - 2; i >= 0; i--)
    {
        if (v[i] < temp && v[i] < v[i + 1])
        {
            cnt--;
            temp = v[i];
        }
    }

    cout << cnt;
}