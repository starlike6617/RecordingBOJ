#include <iostream>
#include <vector>
#define endl '\n'
using namespace std;

int main()
{
    // https://www.rand.org/content/dam/rand/pubs/papers/2006/P2786.pdf
    long long arr[20] = {1, 9, 89, 89, 589, 3089, 3089, 3089, 315589, 315589, 8128089, 164378089, 945628089, 1922190589, 11687815589, 109344065589, 231414378089, 1452117503089, 4503875315589, 65539031565589};

    int T;
    cin >> T;

    while (T--)
    {
        int R;
        cin >> R;
        cout << arr[R - 1] << endl;
    }
}