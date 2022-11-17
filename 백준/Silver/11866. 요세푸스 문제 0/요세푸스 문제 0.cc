#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n, k, sum;
    cin >> n >> k;

    vector<int> v(n);
    for (int i = 0; i < n; i++)
        v[i] = i + 1;

    cout << '<';
    sum = k - 1;
    while (v.size() != 1)
    {
        cout << v[sum] << ", ";
        v.erase(v.begin() + sum); // size -= 1
        sum = (sum + k - 1) % v.size();
    }
    cout << v.front() << '>';
}