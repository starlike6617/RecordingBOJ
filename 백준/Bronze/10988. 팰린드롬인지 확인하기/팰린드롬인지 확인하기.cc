#include <iostream>
using namespace std;

int main()
{
    string str;
    cin >> str;

    int start = 0, end = str.size() - 1;
    bool isPalindrome = true;

    while (start < end)
    {
        if (str[start] != str[end])
        {
            isPalindrome = false;
            break;
        }

        start++;
        end--;
    }

    if (isPalindrome)
        cout << 1;
    else
        cout << 0;
}