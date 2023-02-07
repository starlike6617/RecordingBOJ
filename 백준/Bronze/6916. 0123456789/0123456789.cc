#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    string num[10];

    num[0] = R"( * * *
*     *
*     *
*     *

*     *
*     *
*     *
 * * *)";
    num[1] = R"(
      *
      *
      *

      *
      *
      *
      )";
    num[2] = R"( * * *
      *
      *
      *
 * * *
*
*
*
 * * *)";
    num[3] = R"( * * *
      *
      *
      *
 * * *
      *
      *
      *
 * * *)";
    num[4] = R"(
*     *
*     *
*     *
 * * *
      *
      *
      *
)";
    num[5] = R"( * * *
*
*
*
 * * *
      *
      *
      *
 * * *)";
    num[6] = R"( * * *
*
*
*
 * * *
*     *
*     *
*     *
 * * *)";
    num[7] = R"( * * *
      *
      *
      *

      *
      *
      *
)";
    num[8] = R"( * * *
*     *
*     *
*     *
 * * *
*     *
*     *
*     *
 * * *)";
    num[9] = R"( * * *
*     *
*     *
*     *
 * * *
      *
      *
      *
 * * *)";

    int n;
    cin >> n;
    cout << num[n];
}