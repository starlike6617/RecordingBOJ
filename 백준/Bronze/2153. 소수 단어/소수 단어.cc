#include <iostream>
using namespace std;

int main()
{
    string s;
    cin >> s;

    int n = 0;
    for (char c : s)
    {
        if ('a' <= c && c <= 'z')
        {
            n += c - 'a' + 1;
        }
        else if ('A' <= c && c <= 'Z')
        {
            n += c - 'A' + 27;
        }
    }

    bool isPrime = true;
    for (int i = 2; i * i <= n; i++)
    {
        if (n % i == 0)
        {
            isPrime = false;
            break;
        }
    }

    if (isPrime)
    {
        cout << "It is a prime word.";
    }
    else
    {
        cout << "It is not a prime word.";
    }
}