#include <iostream>
using namespace std;

int main()
{
    int n, stu[30] = {};
    for (int i = 0; i < 28; i++)
    {
        cin >> n;
        stu[n - 1]++;
    }
    for (int i = 0; i < 30; i++)
        if (stu[i] == 0)
            cout << i + 1 << endl;
}