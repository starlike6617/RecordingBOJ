#include <iostream>
using namespace std;

int main()
{
    int N;
    cin >> N;

    while (N--)
    {
        string str;
        cin >> str;
        cout << (6 <= str.size() && str.size() <= 9 ? "yes" : "no") << endl;
    }
}