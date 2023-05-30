#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    while (n--)
    {
        int d;
        cin >> d;

        int arr[d];
        for (int i = 0; i < d; i++)
            cin >> arr[i];

        bool isGood = true;
        for (int i = 1; i < d; i++)
            if (arr[i] < arr[i - 1] * 2)
            {
                isGood = false;
                break;
            }

        cout << "Denominations: ";
        for (int i : arr)
            cout << i << ' ';
        cout << endl;
        cout << (isGood ? "Good" : "Bad") << " coin denominations!\n\n";
    }
}