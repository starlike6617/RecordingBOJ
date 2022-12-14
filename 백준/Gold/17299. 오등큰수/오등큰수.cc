#include <iostream>
#include <stack>
using namespace std;

int cnt[1000001];

int main()
{
    int n;
    cin >> n;

    int arr[n], res[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        cnt[arr[i]]++;
        res[i] = -1;
    }

    stack<int> s;
    for (int i = n - 1; i >= 0; i--)
    {
        while (!s.empty() && cnt[s.top()] <= cnt[arr[i]])
            s.pop();
        if (!s.empty())
            res[i] = s.top();
        s.push(arr[i]);
    }

    for (int i : res)
        cout << i << ' ';
}