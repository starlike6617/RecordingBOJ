#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int N;
    cin >> N;

    int a = (int)sqrt(N);
    if (a * a == N)
        cout << a << ' ' << a;
    else if (a * (a + 1) >= N)
        cout << a << ' ' << a + 1;
    else
        cout << a + 1 << ' ' << a + 1;
}