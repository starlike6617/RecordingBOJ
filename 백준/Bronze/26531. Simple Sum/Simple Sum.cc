#include <iostream>
using namespace std;

int main()
{
    int a, b, c;
    char plus, equal;
    cin >> a >> plus >> b >> equal >> c;

    if (a + b == c)
        cout << "YES";
    else
        cout << "NO";
}