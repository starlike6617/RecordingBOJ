#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int n, m, nv[500001], mv[500001];

    cin >> n;
    for (int i = 0; i < n; i++)
        scanf("%d", nv + i);

    cin >> m;
    for (int i = 0; i < m; i++)
        scanf("%d", mv + i);

    sort(nv, nv + n);
    for (int i = 0; i < m; i++)
    {
        printf((binary_search(nv, nv + n, mv[i]) ? "1" : "0"));
        printf(" ");
    }
}