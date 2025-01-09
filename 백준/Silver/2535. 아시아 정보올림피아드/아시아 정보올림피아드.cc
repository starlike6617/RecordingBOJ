#include <iostream>
#include <vector>
#include <algorithm>
#define endl '\n'
using namespace std;

class Student
{
public:
    int country;
    int idx;
    int score;
};

bool cmp(Student a, Student b)
{
    return a.score > b.score;
}

int main()
{
    int N;
    cin >> N;

    Student arr[100];
    for (int i = 0; i < N; i++)
    {
        cin >> arr[i].country >> arr[i].idx >> arr[i].score;
    }

    sort(arr, arr + N, cmp);

    int teamCnt[101] = {};
    int medalCnt = 0;

    for (int i = 0; i < N; i++)
    {
        if (medalCnt == 3)
        {
            break;
        }

        if (teamCnt[arr[i].country] < 2)
        {
            cout << arr[i].country << ' ' << arr[i].idx << endl;
            medalCnt++;
            teamCnt[arr[i].country]++;
        }
    }
}