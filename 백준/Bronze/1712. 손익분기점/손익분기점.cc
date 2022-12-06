#include <iostream>
using namespace std;

int main()
{
    double a, b, c;
    cin >> a >> b >> c;
    cout << (c > b ? (int)(a / (c - b) + 1) : -1);
}