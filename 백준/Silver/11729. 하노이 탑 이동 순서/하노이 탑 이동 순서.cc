#include <iostream>
using namespace std;

void hanoi(int n, int from, int by, int to)
{
    if (n == 0)
        return;

    hanoi(n - 1, from, to, by);
    cout << from << ' ' << to << '\n';
    hanoi(n - 1, by, from, to);
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int num;
    cin >> num;

    int k = 1;
    for (int i = 0; i < num; i++)
        k *= 2;
    cout << k - 1 << '\n';

    hanoi(num, 1, 2, 3);
}