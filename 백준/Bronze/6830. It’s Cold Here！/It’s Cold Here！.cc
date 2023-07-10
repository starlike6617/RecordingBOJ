#include <iostream>
using namespace std;

int main()
{
    string res;
    int temp = 200;

    while (true)
    {
        string s;
        int n;
        cin >> s >> n;

        if (s == "Waterloo")
        {
            break;
        }

        if (n < temp)
        {
            res = s;
            temp = n;
        }
    }

    cout << res;
}