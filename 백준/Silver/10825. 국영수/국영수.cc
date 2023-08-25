#include <iostream>
#include <algorithm>
using namespace std;

class Student
{
public:
    string name;
    int a, b, c;
};

bool cmp(Student A, Student B)
{
    if (A.a == B.a)
    {
        if (A.b == B.b)
        {
            if (A.c == B.c)
            {
                return A.name < B.name;
            }
            return A.c > B.c;
        }
        return A.b < B.b;
    }
    return A.a > B.a;
}

int main()
{
    int N;
    cin >> N;

    Student s[N];
    for (int i = 0; i < N; i++)
    {
        cin >> s[i].name >> s[i].a >> s[i].b >> s[i].c;
    }

    sort(s, s + N, cmp);

    for (int i = 0; i < N; i++)
    {
        cout << s[i].name << '\n';
    }
}