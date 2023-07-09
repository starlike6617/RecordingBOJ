#include <iostream>
using namespace std;

int main()
{
    int t2, t1;
    cin >> t1 >> t2;

    int cnt = 2;
    while (t1 >= t2)
    {
        int temp = abs(t1 - t2);
        t1 = t2;
        t2 = temp;
        cnt++;
    }
    cout << cnt;
}