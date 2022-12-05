#include <iostream>
#include <stack>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int n;
    cin >> n;

    int arr[n], res[n] = {};
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    stack<int> s;
    for (int i = 0; i < n; i++)
    {
        while (!s.empty() && arr[i] > arr[s.top()])
            s.pop();
        if (!s.empty())
            res[i] = s.top() + 1;
        s.push(i);
    }

    for (int i = 0; i < n; i++)
        cout << res[i] << ' ';
}