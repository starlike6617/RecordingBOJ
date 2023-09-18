#include <iostream>
#include <queue>
using namespace std;

int main()
{
    int N;
    cin >> N;

    queue<pair<string, int>> q;
    while (N--)
    {
        string name;
        int num;
        cin >> name >> num;
        q.push({name, num - 1});
    }

    while (q.size() > 1)
    {
        pair<string, int> temp = q.front();
        q.pop();

        while (temp.second--)
        {
            q.push(q.front());
            q.pop();
        }

        q.pop();
    }

    cout << q.front().first;
}