#include <iostream>
using namespace std;

int main()
{
    int N;
    cin >> N;

    int res = 0;
    while (N--)
    {
        int a;
        cin >> a;

        if (a == 0)
        {
            res--;
        }
        else
        {
            res++;
        }
    }

    if (res > 0)
    {
        cout << "Junhee is cute!";
    }
    else
    {
        cout << "Junhee is not cute!";
    }
}