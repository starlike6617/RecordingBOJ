#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    while (n--)
    {
        int num;
        cin >> num;

        int sum = 0;
        for (int i = 1; i < num; i++)
        {
            if (num % i == 0)
            {
                sum += i;
            }
        }

        cout << num << " is ";
        if (sum < num)
        {
            cout << "a deficient";
        }
        else if (sum > num)
        {
            cout << "an abundant";
        }
        else
        {
            cout << "a perfect";
        }
        cout << " number." << endl
             << endl;
    }
}