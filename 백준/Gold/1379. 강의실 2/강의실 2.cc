#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

class Lecture
{
public:
    int lecNum;
    int start;
    int end;
};

struct cmp
{
    bool operator()(Lecture a, Lecture b)
    {
        if (a.start == b.start)
        {
            return a.end > b.end;
        }
        return a.start > b.start;
    }
};

struct cmp2
{
    bool operator()(Lecture a, Lecture b)
    {
        return a.end > b.end;
    }
};

struct cmp3
{
    bool operator()(Lecture a, Lecture b)
    {
        return a.lecNum > b.lecNum;
    }
};

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int N;
    cin >> N;

    priority_queue<Lecture, vector<Lecture>, cmp> pq;
    for (int i = 0; i < N; i++)
    {
        Lecture lec;
        cin >> lec.lecNum >> lec.start >> lec.end;
        pq.push(lec);
    }

    int room = 1;
    int arr[N + 1] = {};
    arr[pq.top().lecNum] = room;

    priority_queue<Lecture, vector<Lecture>, cmp2> pq2;
    pq2.push(pq.top());
    pq.pop();

    priority_queue<Lecture, vector<Lecture>, cmp3> res;
    while (!pq.empty())
    {
        if (pq2.top().end <= pq.top().start)
        {
            arr[pq.top().lecNum] = arr[pq2.top().lecNum];

            res.push(pq2.top());
            pq2.pop();
        }
        else
        {
            arr[pq.top().lecNum] = ++room;
        }

        pq2.push(pq.top());
        pq.pop();
    }

    while (!pq2.empty())
    {
        res.push(pq2.top());
        pq2.pop();
    }

    cout << room << endl;
    while (!res.empty())
    {
        cout << arr[res.top().lecNum] << endl;
        res.pop();
    }
}