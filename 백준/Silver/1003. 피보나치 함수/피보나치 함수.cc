#include <iostream>
using namespace std;

class Freq
{
public:
    int zero;
    int one;
};

void fibo(int a)
{
    Freq arr[41];
    arr[0].zero = 1, arr[0].one = 0;
    arr[1].zero = 0, arr[1].one = 1;

    for (int i = 2; i <= a; i++)
    {
        arr[i].zero = arr[i - 1].zero + arr[i - 2].zero;
        arr[i].one = arr[i - 1].one + arr[i - 2].one;
    }

    cout << arr[a].zero << ' ' << arr[a].one << endl;
}

int main()
{
    int t, n;
    cin >> t;

    while (t--)
    {
        cin >> n;
        fibo(n);
    }
}