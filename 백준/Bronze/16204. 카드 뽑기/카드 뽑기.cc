#include <iostream>
using namespace std;

int main()
{
    int N, M, K;
    cin >> N >> M >> K;
    cout << min(M, K) + min(N - M, N - K);
}