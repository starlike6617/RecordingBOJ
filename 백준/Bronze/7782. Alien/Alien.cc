#include <iostream>
using namespace std;

int main()
{
    int n, b1, b2;
    cin >> n >> b1 >> b2;

    string res = "No";
    while (n--)
    {
        int lx, ly, hx, hy;
        cin >> lx >> ly >> hx >> hy;
        if (lx <= b1 && b1 <= hx && ly <= b2 && b2 <= hy)
        {
            res = "Yes";
        }
    }
    cout << res;
}