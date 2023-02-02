#include <iostream>
using namespace std;

int main()
{
    int N;
    cin >> N;
    cout << (N / 10 == N % 10 ? 1 : 0);
}