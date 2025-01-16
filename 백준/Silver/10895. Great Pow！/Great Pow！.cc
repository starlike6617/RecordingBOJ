#include <iostream>
using namespace std;

int main()
{
    int a, k;
    cin >> a >> k;

    cout << (a % 2 == 0 && k != 0 ? 1 : a);
}