#include <iostream>
using namespace std;

int main()
{
    int N;
    cin >> N;

    int cnt = 0;
    while (N--)
    {
        char d1, d2;
        int x;
        cin >> d1 >> d2 >> x;

        if (x <= 90)
            cnt++;
    }

    cout << cnt;
}