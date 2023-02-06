#include <iostream>
using namespace std;

int main()
{
    int D, H, M, T;
    cin >> D >> H >> M;
    T = D * 1440 + H * 60 + M - 11 * 1440 - 11 * 60 - 11;
    cout << (T < 0 ? -1 : T);
}