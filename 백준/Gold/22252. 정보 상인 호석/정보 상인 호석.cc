#include <iostream>
#include <vector>
#include <queue>
using namespace std;

class Gorilla
{
public:
    string name;
    priority_queue<int> pq;

    Gorilla(string _name)
    {
        name = _name;
    }
};

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int Q;
    cin >> Q;

    long long res = 0;
    vector<Gorilla> v;

    while (Q--)
    {
        int n;
        cin >> n;

        if (n == 1)
        {
            string name;
            int k;
            cin >> name >> k;

            bool isNew = true;
            int idx = 0;

            for (int i = 0; i < v.size(); i++)
            {
                if (name == v[i].name)
                {
                    isNew = false;
                    idx = i;
                }
            }

            Gorilla g(name);
            while (k--)
            {
                long long C;
                cin >> C;

                if (isNew)
                {
                    g.pq.push(C);
                }
                else
                {
                    v[idx].pq.push(C);
                }
            }

            if (isNew)
            {
                v.push_back(g);
            }
        }
        else
        {
            string name;
            int b;
            cin >> name >> b;

            bool isExist = false;
            int idx = 0;

            for (int i = 0; i < v.size(); i++)
            {
                if (name == v[i].name)
                {
                    isExist = true;
                    idx = i;
                }
            }

            if (!isExist)
            {
                continue;
            }

            while (!v[idx].pq.empty() && b--)
            {
                res += v[idx].pq.top();
                v[idx].pq.pop();
            }
        }
    }

    cout << res;
}