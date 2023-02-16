#include <iostream>
using namespace std;

int main()
{
    int S, K, H;
    cin >> S >> K >> H;

    if (S + K + H >= 100)
        cout << "OK";
    else if (S < K && S < H)
        cout << "Soongsil";
    else if (K < S && K < H)
        cout << "Korea";
    else if (H < S && H < K)
        cout << "Hanyang";
}