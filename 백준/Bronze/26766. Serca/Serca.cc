#include <iostream>
using namespace std;

int main()
{
    string str = R"( @@@   @@@ 
@   @ @   @
@    @    @
@         @
 @       @ 
  @     @  
   @   @   
    @ @    
     @     
)";
    int n;
    cin >> n;
    while (n--)
        cout << str;
}