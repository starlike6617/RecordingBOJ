#include <iostream>
#include <vector>
#include <algorithm>
#include <set>
#define endl '\n'
using namespace std;

int main()
{
    string S;
    cin >> S;

    set<string> st;
    for (int i = 0; i < S.size(); i++)
    {
        for (int j = 1; j <= S.size() - i; j++)
        {
            st.insert(S.substr(i, j));
        }
    }

    cout << st.size();
}