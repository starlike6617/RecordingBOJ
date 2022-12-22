#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    string str, word;
    getline(cin, str);
    getline(cin, word);

    int cnt = 0;
    while (str.find(word) != string::npos)
    {
        cnt++;
        str.replace(str.find(word), word.size(), "_");
    }
    cout << cnt;
}