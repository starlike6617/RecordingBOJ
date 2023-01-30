#include <iostream>
using namespace std;

int main()
{
    int a, b, c;
    cin >> a >> b >> c;

    double N = (double)(a + 1) * (b + 1) / (c + 1) - 1;
    cout << (int)N;
}