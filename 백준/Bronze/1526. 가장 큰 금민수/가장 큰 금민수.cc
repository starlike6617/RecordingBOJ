#include <iostream>
using namespace std;

int N;
int maxGeumMinSu = 0;

void makeGeumMinSu(int num)
{
    if (num > N)
    {
        return;
    }

    maxGeumMinSu = max(maxGeumMinSu, num);

    makeGeumMinSu(num * 10 + 4);
    makeGeumMinSu(num * 10 + 7);
}

int main()
{
    cin >> N;

    makeGeumMinSu(0);

    cout << maxGeumMinSu;
}