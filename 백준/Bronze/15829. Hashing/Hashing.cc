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
        k = str[i] - 'a' + 1;
        for (int j = 0; j < i; j++)
        {
            k *= 31;
            k %= m;
        }
        sum = (sum + k) % m;
    }

    cout << sum;
}