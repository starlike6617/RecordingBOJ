#include <iostream>
using namespace std;

int main()
{
    int S, M, L;
    cin >> S >> M >> L;
    cout << (S + 2 * M + 3 * L >= 10 ? "happy" : "sad");
}