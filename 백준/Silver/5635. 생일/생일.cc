#include <iostream>
#include <algorithm>
using namespace std;

class Birth
{
public:
    string name;
    int day;
    int month;
    int year;
};

bool cmp(Birth a, Birth b)
{
    if (a.year != b.year)
        return a.year > b.year;
    else if (a.month != b.month)
        return a.month > b.month;
    else
        return a.day > b.day;
}

int main()
{
    int n;
    cin >> n;

    Birth arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i].name >> arr[i].day >> arr[i].month >> arr[i].year;

    sort(arr, arr + n, cmp);

    cout << arr[0].name << endl
         << arr[n - 1].name;
}