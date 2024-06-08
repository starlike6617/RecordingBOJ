#include <iostream>
#include <sstream>
#include <stack>
using namespace std;

int solution(string s)
{
    stringstream ss(s);
    string str;
    stack<int> stk;
    
    while (ss >> str)
    {
        if (str == "Z")
        {
            stk.pop();
        }
        else
        {
            stk.push(stoi(str));
        }
    }
    
    int answer = 0;
    while (!stk.empty())
    {
        answer += stk.top();
        stk.pop();
    }
    
    return answer;
}