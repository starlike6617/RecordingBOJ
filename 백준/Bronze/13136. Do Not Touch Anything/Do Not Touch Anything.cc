#include <iostream>
using namespace std;

int main()
{
    long long R, C, N;
    cin >> R >> C >> N;
    cout << (R % N == 0 ? R / N : R / N + 1) * (C % N == 0 ? C / N : C / N + 1);
}