#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    while (n--)
    {
        int arr[8] = {};

        string str;
        cin >> str;

        for (int i = 0; i < str.size() - 2; i++)
        {
            string sub = str.substr(i, 3);
            if (sub == "TTT")
                arr[0]++;
            if (sub == "TTH")
                arr[1]++;
            if (sub == "THT")
                arr[2]++;
            if (sub == "THH")
                arr[3]++;
            if (sub == "HTT")
                arr[4]++;
            if (sub == "HTH")
                arr[5]++;
            if (sub == "HHT")
                arr[6]++;
            if (sub == "HHH")
                arr[7]++;
        }

        for (int i : arr)
            cout << i << ' ';
        cout << endl;
    }
}