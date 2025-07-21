#include <iostream>
using namespace std;

int main()
{
    string a, b, c;
    cin >> a >> b >> c;

    int res;
    if (a != "Fizz" && a != "Buzz" && a != "FizzBuzz")
    {
        res = stoi(a) + 3;
    }
    else if (b != "Fizz" && b != "Buzz" && b != "FizzBuzz")
    {
        res = stoi(b) + 2;
    }
    else
    {
        res = stoi(c) + 1;
    }

    if (res % 3 == 0 && res % 5 == 0)
    {
        cout << "FizzBuzz";
    }
    else if (res % 3 == 0)
    {
        cout << "Fizz";
    }
    else if (res % 5 == 0)
    {
        cout << "Buzz";
    }
    else
    {
        cout << res;
    }
}