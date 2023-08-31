#include <iostream>
#include <map>
using namespace std;

int main()
{
    int N, M;
    cin >> N >> M;

    map<string, string> m;
    for (int i = 0; i < N; i++)
    {
        string team;
        int num;
        cin >> team >> num;

        for (int j = 0; j < num; j++)
        {
            string member;
            cin >> member;
            m[member] = team;
        }
    }

    for (int i = 0; i < M; i++)
    {
        string name;
        int type;
        cin >> name >> type;

        if (type == 1)
        {
            cout << m[name] << endl;
        }
        else
        {
            for (auto it : m)
            {
                if (it.second == name)
                {
                    cout << it.first << endl;
                }
            }
        }
    }
}