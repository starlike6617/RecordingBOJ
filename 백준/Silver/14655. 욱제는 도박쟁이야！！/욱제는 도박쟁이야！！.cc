#include <iostream>
using namespace std;

int main()
{
    int N;
    cin >> N;

    int sum = 0;
    for (int i = 0; i < N * 2; i++)
    {
        int a;
        cin >> a;
        sum += abs(a);
    }
    cout << sum;
}