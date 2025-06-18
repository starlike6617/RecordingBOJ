#include <iostream>
#include <sstream>
#define endl '\n'
using namespace std;

int main()
{
    int T;
    cin >> T;
    cin.ignore();

    while (T--)
    {
        string s;
        getline(cin, s);

        stringstream ss(s);
        string word;
        while (ss >> word)
        {
            reverse(word.begin(), word.end());
            cout << word << ' ';
        }
        cout << endl;
    }
}