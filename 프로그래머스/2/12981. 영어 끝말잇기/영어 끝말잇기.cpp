#include <string>
#include <vector>
#include <iostream>
#include <algorithm>
#include <map>
#include <cmath>
using namespace std;

vector<int> solution(int n, vector<string> words)
{
    map<string, int> m;
    m[words[0]]++;
    
    int idx = -1;
    for (int i = 1; i < words.size(); i++)
    {
        m[words[i]]++;
        if (words[i][0] != words[i - 1][words[i - 1].size() - 1] || m[words[i]] > 1)
        {
            idx = i + 1;
            break;
        }
    }
    
    vector<int> ans(2);
    if (idx != -1)
    {
        ans[0] = (idx % n == 0 ? n : idx % n);
        ans[1] = (idx + n - 1) / n;
    }
    
    return ans;
}