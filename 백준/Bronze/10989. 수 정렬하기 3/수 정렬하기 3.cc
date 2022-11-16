#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n = 0;
    scanf("%d", &n);

    vector<int> v(10001);
    for (int i = 0; i < n; i++)
    {
        int num;
        scanf("%d", &num);
        v[num]++;
    }

    for (int i = 0; i < v.size(); i++)
        for (int j = 0; j < v[i]; j++)
        {
            printf("%d", i);
            printf("\n");
        }
}