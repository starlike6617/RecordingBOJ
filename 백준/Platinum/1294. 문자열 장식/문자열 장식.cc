#include <iostream>
#include <vector>
#include <queue>
#define endl '\n'
using namespace std;

struct cmp
{
    bool operator()(string a, string b)
    {
        return a + b > b + a;
    }
};

int main()
{
    int N;
    cin >> N;

    priority_queue<string, vector<string>, cmp> pq;
    while (N--)
    {
        string s;
        cin >> s;
        pq.push(s);
    }

    while (!pq.empty())
    {
        string s = pq.top();
        cout << s[0];
        pq.pop();

        if (s.size() != 1)
        {
            pq.push(s.substr(1));
        }
    }
}