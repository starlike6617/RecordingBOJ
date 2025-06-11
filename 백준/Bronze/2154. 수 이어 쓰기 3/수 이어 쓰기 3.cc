#include <iostream>
#define endl '\n'
using namespace std;

int main()
{
    int N;
    cin >> N;

    string s = "";
    for (int i = 1; i <= N; i++)
    {
        s += to_string(i);
    }

    cout << s.find(to_string(N)) + 1;
}