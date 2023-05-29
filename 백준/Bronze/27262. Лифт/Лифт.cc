#include <iostream>
using namespace std;

int main()
{
    int n, k, a, b;
    cin >> n >> k >> a >> b;
    cout << (n + k - 2) * b << ' ' << (n - 1) * a;
}