#include <iostream>
using namespace std;

int main()
{
    int N, M, K;
    cin >> N >> M >> K;
    cout << min(N / 2, min(M, (N + M - K) / 3));
}