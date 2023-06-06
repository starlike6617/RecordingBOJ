#include <iostream>
using namespace std;

int A, B, C, D;

int attack(int n)
{
    int x = n % (A + B);
    int y = n % (C + D);

    int res = 0;
    if (x <= A && x != 0)
        res++;
    if (y <= C && y != 0)
        res++;
    return res;
}

int main()
{
    int P, M, N;
    cin >> A >> B >> C >> D >> P >> M >> N;

    cout << attack(P) << endl;
    cout << attack(M) << endl;
    cout << attack(N) << endl;
}