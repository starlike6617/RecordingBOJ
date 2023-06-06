#include <iostream>
using namespace std;

int main()
{
    int a, b, c;
    cin >> a >> b >> c;

    char op1, op2;
    if (a + b == c)
    {
        op1 = '+';
        op2 = '=';
    }
    else if (a - b == c)
    {
        op1 = '-';
        op2 = '=';
    }
    else if (a * b == c)
    {
        op1 = '*';
        op2 = '=';
    }
    else if (a == b * c)
    {
        op1 = '=';
        op2 = '*';
    }
    else if (a == b + c)
    {
        op1 = '=';
        op2 = '+';
    }
    else if (a == b - c)
    {
        op1 = '=';
        op2 = '-';
    }
    else if (a * c == b)
    {
        op1 = '=';
        op2 = '/';
    }

    cout << a << op1 << b << op2 << c;
}