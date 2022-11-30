#include <iostream>
using namespace std;

int arr[10001] = {};

void d(int a)
{
    int b = a;
    while (a)
    {
        b += a % 10;
        a /= 10;
    }
    
    if (b <= 10000 && arr[b] == 0)
    {
        arr[b] = 1;
        d(b);
    }
}

int main()
{
    for (int i = 1; i <= 10000; i++)
    {
        int n = i;
        d(n);
    }

    for (int i = 1; i <= 10000; i++)
        if (arr[i] == 0)
            cout << i << endl;
}