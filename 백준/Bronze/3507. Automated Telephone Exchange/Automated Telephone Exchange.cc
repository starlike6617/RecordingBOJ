#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int cnt = 0;
    for (int i = 0; i < 100; i++)
        for (int j = 0; j < 100; j++)
            if (n == i + j)
                cnt++;
    cout << cnt;
}