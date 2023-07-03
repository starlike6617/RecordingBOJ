#include <iostream>
using namespace std;

int main()
{
    int arr[6];
    for (int i = 0; i < 6; i++)
    {
        string s;
        getline(cin, s);

        arr[i] = s.size();
        if (s[s.size() - 1] == ' ')
            arr[i]--;
    }

    cout << "Latitude " << arr[0] << ":" << arr[1] << ":" << arr[2] << endl;
    cout << "Longitude " << arr[3] << ":" << arr[4] << ":" << arr[5] << endl;
}