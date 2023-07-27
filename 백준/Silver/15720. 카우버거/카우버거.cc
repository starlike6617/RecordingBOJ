#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int B, C, D;
    cin >> B >> C >> D;

    int b[B], c[C], d[D];
    int sum = 0;

    for (int i = 0; i < B; i++)
    {
        cin >> b[i];
        sum += b[i];
    }
    for (int i = 0; i < C; i++)
    {
        cin >> c[i];
        sum += c[i];
    }
    for (int i = 0; i < D; i++)
    {
        cin >> d[i];
        sum += d[i];
    }

    sort(b, b + B, greater<int>());
    sort(c, c + C, greater<int>());
    sort(d, d + D, greater<int>());

    int set = 0;
    int size = min(B, min(C, D));

    for (int i = 0; i < size; i++)
    {
        set += (b[i] + c[i] + d[i]) * 0.9;
    }

    for (int i = size; i < B; i++)
    {
        set += b[i];
    }
    for (int i = size; i < C; i++)
    {
        set += c[i];
    }
    for (int i = size; i < D; i++)
    {
        set += d[i];
    }

    cout << sum << endl;
    cout << set;
}