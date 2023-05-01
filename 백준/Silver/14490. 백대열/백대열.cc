#include <iostream>
using namespace std;

int gcd(int a, int b)
{
    if (b == 0)
        return a;
    return gcd(b, a % b);
}

int main()
{
    string str;
    cin >> str;

    int n = stoi(str.substr(0, str.find(':')));
    int m = stoi(str.substr(str.find(':') + 1, str.length() - 1));

    cout << n / gcd(n, m) << ":" << m / gcd(n, m) << endl;
}