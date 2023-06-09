#include <iostream>
using namespace std;

int main()
{
    int q;
    cin >> q;
    cin.ignore();

    string arr[q + 1];
    for (int i = 1; i <= q; i++)
        getline(cin, arr[i]);

    int r;
    cin >> r;

    while (r--)
    {
        int n;
        cin >> n;

        cout << "Rule " << n << ": ";
        if (1 <= n && n <= q)
            cout << arr[n] << endl;
        else
            cout << "No such rule" << endl;
    }
}