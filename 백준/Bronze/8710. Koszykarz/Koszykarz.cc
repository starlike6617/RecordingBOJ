#include <iostream>
using namespace std;

int main()
{
    int k, w, m;
    cin >> k >> w >> m;
    cout << (w - k) / m + ((w - k) % m == 0 ? 0 : 1);
}