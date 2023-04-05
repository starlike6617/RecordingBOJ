#include <iostream>
using namespace std;

int A, B;
int cnt;

void count(long long n)
{
    if (n > B)
        return;

    if (A <= n && n <= B)
        cnt++;

    count(n * 10 + 4);
    count(n * 10 + 7);
}

int main()
{
    cin >> A >> B;

    count(0);

    cout << cnt;
}