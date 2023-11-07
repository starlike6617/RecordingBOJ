#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

int main()
{
    int N;
    string s;
    cin >> N >> s;
    cout << s.substr(N - 5, 5);
}