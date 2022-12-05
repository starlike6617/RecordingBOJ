#include <iostream>
#include <stack>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int n;
    cin >> n;

    int arr[n], res[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        res[i] = -1;
    }

    stack<int> s;
    for (int i = n - 1; i >= 0; i--)
    {
        while (!s.empty() && s.top() <= arr[i])
            s.pop();
        if (!s.empty())
            res[i] = s.top();
        s.push(arr[i]);
    }

    for (int i = 0; i < n; i++)
        cout << res[i] << ' ';
}