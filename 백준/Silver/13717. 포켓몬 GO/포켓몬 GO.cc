#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

class Pokemon
{
public:
    int idx;
    string name;
    int K;
    int M;
    int cnt = 0;
};

bool cmp(Pokemon a, Pokemon b)
{
    if (a.cnt == b.cnt)
    {
        return a.idx < b.idx;
    }
    return a.cnt > b.cnt;
}

int main()
{
    int N;
    cin >> N;

    Pokemon P[N];
    int totalCnt = 0;
    for (int i = 0; i < N; i++)
    {
        P[i].idx = i;
        cin >> P[i].name >> P[i].K >> P[i].M;

        while (P[i].K <= P[i].M)
        {
            P[i].M += 2 - P[i].K;
            P[i].cnt++;
            totalCnt++;
        }
    }

    sort(P, P + N, cmp);

    cout << totalCnt << endl;
    cout << P[0].name;
}