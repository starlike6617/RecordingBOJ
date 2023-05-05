#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int cnt = 0;
    for (int i = 3; i < n; i += 3)
        for (int j = 3; j < n; j += 3)
            if ((n - i - j) >= 3 && (n - i - j) % 3 == 0)
                cnt++;
    cout << cnt;
}