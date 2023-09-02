#include <iostream>
using namespace std;

int main()
{
    string arr[5];
    int maxSize = 0;

    for (int i = 0; i < 5; i++)
    {
        cin >> arr[i];
        maxSize = max(maxSize, (int)arr[i].size());
    }

    for (int i = 0; i < maxSize; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            if (arr[j].size() > i)
            {
                cout << arr[j][i];
            }
        }
    }
}