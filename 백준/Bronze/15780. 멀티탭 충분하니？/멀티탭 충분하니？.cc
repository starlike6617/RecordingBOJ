#include <iostream>
using namespace std;

int main()
{
    int N, K;
    cin >> N >> K;

    int res = 0;
    while (K--)
    {
        int A;
        cin >> A;
        res += A / 2 + (A % 2);
    }

    if (N <= res)
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }
}