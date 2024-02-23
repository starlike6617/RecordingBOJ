#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

bool notPrime[3000];
vector<int> prime;

void makePrime()
{
    for (int i = 2; i <= 60; i++)
        if (!notPrime[i])
            for (int j = i * 2; j < 3000; j += i)
                notPrime[j] = true;

    for (int i = 2; i < 3000; i++)
        if (!notPrime[i])
            prime.push_back(i);
}

int solution(vector<int> nums) {
    makePrime();
    
    int cnt = 0;
    for (int i = 0; i < nums.size(); i++)
    {
        for (int j = i + 1; j < nums.size(); j++)
        {
            for (int k = j + 1; k < nums.size(); k++)
            {
                int n = nums[i] + nums[j] + nums[k];
                if (find(prime.begin(), prime.end(), n) != prime.end())
                {
                    cnt++;
                }
            }
        }
    }
    return cnt;
}