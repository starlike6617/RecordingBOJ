#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Person
{
public:
    int age;
    string name;
};

bool compare(Person p1, Person p2)
{
    return p1.age < p2.age;
}

int main()
{
    int n;
    cin >> n;

    vector<Person> v(n);
    for (int i = 0; i < n; i++)
        cin >> v[i].age >> v[i].name;

    stable_sort(v.begin(), v.end(), compare);

    for (int i = 0; i < n; i++)
        cout << v[i].age << ' ' << v[i].name << '\n';
}