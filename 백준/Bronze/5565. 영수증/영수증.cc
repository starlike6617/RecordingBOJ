#include <iostream>
using namespace std;

int main()
{
    int sum;
    cin >> sum;

    for (int i = 0; i < 9; i++)
    {
        int n;
        cin >> n;
        sum -= n;
    }

    cout << sum;
}