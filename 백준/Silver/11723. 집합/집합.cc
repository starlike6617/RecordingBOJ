#include <iostream>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

    int n, m, s = 0;
    cin >> m;
    string str;

    for (int i = 0; i < m; i++)
    {
        cin >> str;
        if (str == "add")
        {
            cin >> n;
            s |= (1 << n);
        }
        else if (str == "remove")
        {
            cin >> n;
            s &= ~(1 << n);
        }
        else if (str == "check")
        {
            cin >> n;
            cout << (s & (1 << n) ? 1 : 0) << '\n';
        }
        else if (str == "toggle")
        {
            cin >> n;
            s ^= (1 << n);
        }
        else if (str == "all")
        {
            s = (1 << 21) - 1;
        }
        else if (str == "empty")
        {
            s = 0;
        }
    }
}