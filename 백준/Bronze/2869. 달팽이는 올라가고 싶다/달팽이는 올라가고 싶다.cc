#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    double a, b, v;
    cin >> a >> b >> v;
    cout << (int)ceil((v - a) / (a - b)) + 1;
}