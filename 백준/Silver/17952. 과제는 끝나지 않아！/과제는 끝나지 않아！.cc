#include <iostream>
#include <stack>
using namespace std;

class Assignment
{
public:
    int score;
    int time;
};

int main()
{
    int n, x, a, t, sum = 0;
    cin >> n;

    stack<Assignment> s;
    for (int i = 0; i < n; i++)
    {
        cin >> x;

        if (x == 1)
        {
            cin >> a >> t;
            s.push({a, t - 1});
        }
        else if (x == 0 && !s.empty())
            s.top().time--;

        if (s.top().time == 0 && !s.empty())
        {
            sum += s.top().score;
            s.pop();
        }
    }

    cout << sum;
}