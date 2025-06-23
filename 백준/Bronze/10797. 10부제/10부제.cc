#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    
    int cnt = 0;
    for (int i = 0; i < 5; i++)
    {
        int car;
        cin >> car;
        if (car == n) 
        {
            cnt++;
        }
    }
    
    cout << cnt;
}