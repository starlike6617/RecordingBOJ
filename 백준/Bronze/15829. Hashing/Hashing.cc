#include <iostream>
using namespace std;

int main()
{
    int l, m = 1234567891;
    long long sum = 0, k;
    string str;

    cin >> l >> str;

    for (int i = 0; i < l; i++)
    {
        k = 1;
        for (int j = 0; j < i; j++)
        {
            k *= 31;
            k %= m;
        }
        sum = ((str[i] - 'a' + 1) * k + sum) % m;
        sum %= m;
    }

    cout << sum % m;
}