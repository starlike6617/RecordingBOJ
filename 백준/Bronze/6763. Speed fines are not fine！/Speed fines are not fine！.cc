#include <iostream>
using namespace std;

int main()
{
    int a, b;
    cin >> a >> b;

    if (b - a > 0)
    {
        cout << "You are speeding and your fine is $";
        if (b - a > 30)
            cout << 500;
        else if (b - a > 20)
            cout << 270;
        else
            cout << 100;
        cout << ".";
    }
    else
        cout << "Congratulations, you are within the speed limit!";
}