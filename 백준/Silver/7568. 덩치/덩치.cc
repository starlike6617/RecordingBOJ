#include <iostream>
using namespace std;

class Person
{
public:
    int w;
    int h;
    int cnt = 0;
};

int main()
{
    int n;
    cin >> n;

    Person p[n];
    for (int i = 0; i < n; i++)
        cin >> p[i].w >> p[i].h;

    for (int i = 0; i < n; i++)
        for (int k = 0; k < n; k++)
            if (p[i].w < p[k].w && p[i].h < p[k].h)
                p[i].cnt++;

    for (int i = 0; i < n; i++)
        cout << p[i].cnt + 1 << ' ';
}