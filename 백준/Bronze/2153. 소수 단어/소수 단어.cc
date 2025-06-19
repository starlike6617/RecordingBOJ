#include <iostream>
using namespace std;

int main()
{
    string s;
    cin >> s;

    int sum = 0;
    for (char c : s)
    {
        if ('a' <= c && c <= 'z')
        {
            sum += c - 'a' + 1;
        }
        else
        {
            sum += c - 'A' + 27;
        }
    }

    bool isPrime = true;
    for (int i = 2; i < sum; i++)
    {
        if (sum % i == 0)
        {
            isPrime = false;
            break;
        }
    }

    cout << (isPrime ? "It is a prime word." : "It is not a prime word.");
}