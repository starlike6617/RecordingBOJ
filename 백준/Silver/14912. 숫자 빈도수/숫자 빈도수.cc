#include <iostream>
using namespace std;

int main()
{
    int n;
    char d;
    cin >> n >> d;

    int cnt = 0;
    for (int i = 1; i <= n; i++)
    {
        string str = to_string(i);
        for (char c : str)
            if (c == d)
                cnt++;
    }

    cout << cnt;
}