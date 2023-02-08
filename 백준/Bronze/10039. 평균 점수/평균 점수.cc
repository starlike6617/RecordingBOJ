#include <iostream>
using namespace std;

int main()
{
    int temp, sum = 0;
    for (int i = 0; i < 5; i++)
    {
        cin >> temp;
        if (temp < 40)
            sum += 40;
        else
            sum += temp;
    }
    cout << sum / 5;
}