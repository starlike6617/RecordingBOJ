#include <iostream>
using namespace std;

int main()
{
    string N;
    cin >> N;

    int num[10] = {};
    for (char c : N)
        num[c - '0']++;

    int res = 0;
    for (int i = 0; i < 10; i++)
        if (i != 6 && i != 9)
            res = max(res, num[i]);

    res = max(res, (num[6] + num[9] + 1) / 2);
    cout << res;
}