#include <iostream>
using namespace std;

int main()
{
    int J;
    cin >> J;

    int cnt = 0;
    for (int a = 1; a < J; a++)
    {
        for (int b = a + 1; b < J; b++)
        {
            for (int c = b + 1; c < J; c++)
            {
                cnt++;
            }
        }
    }
    cout << cnt;
}