#include <iostream>
using namespace std;

int main()
{
    int A, B, C, D, P;
    cin >> A >> B >> C >> D >> P;

    int res1 = A * P;
    int res2;
    if (P <= C)
    {
        res2 = B;
    }
    else
    {
        res2 = B + (P - C) * D;
    }

    cout << min(res1, res2);
}