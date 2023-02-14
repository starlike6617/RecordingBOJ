#include <iostream>
using namespace std;

int main()
{
    long long A, B, C;
    cin >> A >> B >> C;

    double res1, res2;
    res1 = (double)A * B / C;
    res2 = (double)A / B * C;

    cout << (int)max(res1, res2);
}