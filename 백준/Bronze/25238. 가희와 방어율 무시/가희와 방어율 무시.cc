#include <iostream>
using namespace std;

int main()
{
    double a, b;
    cin >> a >> b;
    cout << (a * (100 - b) < 10000 ? 1 : 0);
}