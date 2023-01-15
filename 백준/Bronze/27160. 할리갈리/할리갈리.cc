#include <iostream>
#include <map>
using namespace std;

int main()
{
    int N;
    cin >> N;

    map<string, int> m;
    m.insert({"STRAWBERRY", 0});
    m.insert({"BANANA", 0});
    m.insert({"LIME", 0});
    m.insert({"PLUM", 0});

    for (int i = 0; i < N; i++)
    {
        string S;
        int X;
        cin >> S >> X;
        m[S] += X;
    }

    bool res = false;
    for (auto i = m.begin(); i != m.end(); i++)
    {
        if (i->second == 5)
        {
            res = true;
            break;
        }
    }

    cout << (res ? "YES" : "NO");
}