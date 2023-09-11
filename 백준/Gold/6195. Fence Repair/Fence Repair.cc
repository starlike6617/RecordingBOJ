#include <bits/stdc++.h>
using namespace std;

int main()
{
    int N;
    cin >> N;

    priority_queue<int, vector<int>, greater<int>> pq;
    while (N--)
    {
        int a;
        cin >> a;
        pq.push(a);
    }

    long long res = 0;
    while (pq.size() > 1)
    {
        int temp = pq.top();
        pq.pop();
        temp += pq.top();
        pq.pop();

        pq.push(temp);
        res += temp;
    }

    cout << res;
}