#include <iostream>
using namespace std;

int main()
{
    string str;
    cin >> str;
    for (char ch : str)
        cout << (char)(ch - 'a' + 'A');
}