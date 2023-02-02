#include <iostream>
using namespace std;

int main()
{
    int arr[8];
    for (int i = 0; i < 8; i++)
    {
        cin >> arr[i];
        if (arr[i] == 9)
        {
            cout << "F";
            return 0;
        }
    }
    cout << "S";
}