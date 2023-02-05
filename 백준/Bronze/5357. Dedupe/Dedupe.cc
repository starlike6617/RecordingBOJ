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

        cout << str[0];
        for (int i = 1; i < str.size(); i++)
            if (str[i] != str[i - 1])
                cout << str[i];
        cout << endl;
    }
}