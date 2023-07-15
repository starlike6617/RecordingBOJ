#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        string a, b;
        cin >> a >> b;
        cout << "Case " << i << ": " << b << ", " << a << '\n';
    }
}