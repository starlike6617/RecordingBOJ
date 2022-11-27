#include <iostream>
#include <vector>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n, q, start = 0;
    cin >> n >> q;

    int arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    for (int i = 0; i < q; i++)
    {
        int x, a, b;
        cin >> x;

        if (x == 1)
        {
            cin >> a >> b;
            arr[(start + a - 1) % n] += b;
        }
        else if (x == 2)
        {
            cin >> a;
            start = (start + n - a) % n;
        }
        else if (x == 3)
        {
            cin >> a;
            start = (start + a) % n;
        }
    }

    for (int i = start; i < start + n; i++)
        cout << arr[i % n] << ' ';
}