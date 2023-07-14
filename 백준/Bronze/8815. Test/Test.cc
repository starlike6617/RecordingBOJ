#include <iostream>
using namespace std;

int main()
{
    int Z;
    cin >> Z;

    while (Z--)
    {
        int N;
        cin >> N;

        int arr[12] = {0, 1, 2, 1, 2, 3, 2, 3, 0, 3, 0, 1};
        cout << (char)('A' + arr[(N - 1) % 12]) << endl;
    }
}