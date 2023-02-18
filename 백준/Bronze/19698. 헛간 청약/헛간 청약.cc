#include <iostream>
using namespace std;

int main()
{
    int N, W, H, L;
    cin >> N >> W >> H >> L;

    if ((W / L) * (H / L) < N)
        cout << (W / L) * (H / L);
    else
        cout << N;
}