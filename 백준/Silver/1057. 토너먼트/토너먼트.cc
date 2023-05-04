#include <iostream>
using namespace std;

int main()
{
    int N, a, b;
    cin >> N >> a >> b;

    int round = 0;
    while (a != b)
    {
        a = (a + 1) / 2;
        b = (b + 1) / 2;
        round++;
    }

    cout << round;
}