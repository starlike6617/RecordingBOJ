#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    while (n--)
    {
        long long a, b, c, d;
        cin >> a >> b >> c >> d;

        string ans;
        if (a * b < c * d)
            ans = "Eurecom";
        else if (a * b > c * d)
            ans = "TelecomParisTech";
        else
            ans = "Tie";

        cout << ans << endl;
    }
}