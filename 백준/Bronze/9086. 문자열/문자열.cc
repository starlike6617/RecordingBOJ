#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    while (n--)
    {
        string str;
        cin >> str;
        cout << str[0] << str[str.size() - 1] << endl;
    }
}