#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Quiz
{
public:
    string title;
    int num;
    int lv;
};

bool comp(Quiz a, Quiz b)
{
    return a.num < b.num;
}

int main()
{
    int n;
    cin >> n;

    vector<Quiz> qarr;
    for (int i = 0; i < n; i++)
    {
        Quiz q;
        cin >> q.title >> q.num >> q.lv;
        qarr.push_back(q);
    }

    sort(qarr.begin(), qarr.end(), comp);

    for (int i = 0; i < qarr.size(); i++)
    {
        char ch = qarr[i].title[qarr[i].lv - 1];
        if (ch >= 'a' && ch <= 'z')
            cout << (char)(ch - 'a' + 'A');
        else
            cout << ch;
    }
}