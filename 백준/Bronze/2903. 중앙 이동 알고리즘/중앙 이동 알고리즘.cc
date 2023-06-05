#include <iostream>
using namespace std;

int power(int a, int n)
{
    int res = 1;
    while (n--)
        res *= a;
    return res;
}

int main()
{
    int N;
    cin >> N;
    cout << power(1 + power(2, N), 2);
}