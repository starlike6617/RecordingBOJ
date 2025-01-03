#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool cmp1(string a, string b)
{
    if (a.size() == b.size())
    {
        return a > b;
    }
    return a.size() > b.size();
}

bool cmp2(string a, string b)
{
    return a + b > b + a;
}

int main()
{
    int K, N;
    cin >> K >> N;

    vector<string> v(K);
    for (int i = 0; i < K; i++)
    {
        cin >> v[i];
    }

    sort(v.begin(), v.end(), cmp1);

    for (int i = K; i < N; i++)
    {
        v.push_back(v[0]);
    }

    sort(v.begin(), v.end(), cmp2);

    for (string s : v)
    {
        cout << s;
    }
}