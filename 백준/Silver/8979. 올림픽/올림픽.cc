#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int N, K;

struct Medal
{
    int nation;
    int g;
    int s;
    int b;
};

bool cmp(Medal x, Medal y)
{
    if (x.g != y.g)
        return x.g > y.g;
    else if (x.s != y.s)
        return x.s > y.s;
    else
        return x.b > y.b;
}

bool isK(Medal a)
{
    return a.nation == K;
}

int main()
{
    cin >> N >> K;

    vector<Medal> v(N);
    for (int i = 0; i < N; i++)
        cin >> v[i].nation >> v[i].g >> v[i].s >> v[i].b;

    sort(v.begin(), v.end(), cmp);

    int idx = find_if(v.begin(), v.end(), isK) - v.begin();

    int rank = idx + 1;
    for (int i = idx - 1; i >= 0; i--)
        if (v[idx].g == v[i].g && v[idx].s == v[i].s && v[idx].b == v[i].b)
            rank--;

    cout << rank;
}