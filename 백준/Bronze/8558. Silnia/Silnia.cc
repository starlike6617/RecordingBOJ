#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int res = 1;
    for (int i = 1; i <= n; i++)
        res = res * i % 10;

    cout << res;
}