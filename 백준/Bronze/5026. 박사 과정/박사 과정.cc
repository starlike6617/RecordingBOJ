#include <iostream>
using namespace std;

int main()
{
    int N;
    cin >> N;

    while (N--)
    {
        string s;
        cin >> s;

        if (s == "P=NP")
        {
            cout << "skipped" << endl;
        }
        else
        {
            int a = stoi(s.substr(0, s.find('+')));
            int b = stoi(s.substr(s.find('+') + 1, s.size()));
            cout << a + b << endl;
        }
    }
}