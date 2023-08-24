#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

string numToStr(int n)
{
    if (n == 0)
        return "zero";
    else if (n == 1)
        return "one";
    else if (n == 2)
        return "two";
    else if (n == 3)
        return "three";
    else if (n == 4)
        return "four";
    else if (n == 5)
        return "five";
    else if (n == 6)
        return "six";
    else if (n == 7)
        return "seven";
    else if (n == 8)
        return "eight";
    else if (n == 9)
        return "nine";
}

string readNum(int n)
{
    if (n < 10)
        return numToStr(n);
    else
        return numToStr(n / 10) + " " + numToStr(n % 10);
}

bool cmp(pair<int, string> a, pair<int, string> b)
{
    return a.second < b.second;
}

int main()
{
    int M, N;
    cin >> M >> N;

    vector<pair<int, string>> v;
    for (int i = M; i <= N; i++)
    {
        v.push_back(make_pair(i, readNum(i)));
    }

    sort(v.begin(), v.end(), cmp);

    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i].first << ' ';
        if (i % 10 == 9)
            cout << endl;
    }
}