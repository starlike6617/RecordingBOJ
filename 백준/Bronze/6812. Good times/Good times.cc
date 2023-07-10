#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int t = 0;
    t += n % 100;
    n /= 100;
    t += n * 60;

    int arr[7];
    arr[0] = t;
    arr[1] = t - 180;
    arr[2] = t - 120;
    arr[3] = t - 60;
    arr[4] = t;
    arr[5] = t + 60;
    arr[6] = t + 90;

    string s[7] = {"Ottawa", "Victoria", "Edmonton", "Winnipeg", "Toronto", "Halifax", "St. John's"};

    for (int i = 0; i < 7; i++)
    {
        if (arr[i] < 0)
        {
            arr[i] += 24 * 60;
        }
        else if (arr[i] >= 24 * 60)
        {
            arr[i] -= 24 * 60;
        }

        if (arr[i] / 60 != 0)
        {
            cout << arr[i] / 60;
        }
        if (arr[i] % 60 == 0)
        {
            cout << "00";
        }
        else
        {
            cout << arr[i] % 60;
        }
        cout << " in " << s[i] << endl;
    }
}