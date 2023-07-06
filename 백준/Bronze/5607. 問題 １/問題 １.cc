#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int scoreA = 0, scoreB = 0;
    while (n--)
    {
        int a, b;
        cin >> a >> b;

        if (a > b)
            scoreA += a + b;
        else if (a < b)
            scoreB += a + b;
        else
        {
            scoreA += a;
            scoreB += b;
        }
    }
    cout << scoreA << ' ' << scoreB;
}