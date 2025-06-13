#include <iostream>
#define endl '\n'
using namespace std;

int main()
{
    while (true)
    {
        string s;
        cin >> s;

        if (s == "0")
        {
            break;
        }

        bool isPalindrome = true;
        for (int i = 0, j = s.size() - 1; i <= j; i++, j--)
        {
            if (s[i] != s[j])
            {
                isPalindrome = false;
                break;
            }
        }

        cout << (isPalindrome ? "yes" : "no") << endl;
    }
}