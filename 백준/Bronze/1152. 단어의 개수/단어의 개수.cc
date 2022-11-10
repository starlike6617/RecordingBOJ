#include <iostream>
#include <string>
using namespace std;

int main()
{
	string str;
	getline(cin, str, '\n');
	int n = 1;
	
	for (int i = 0; i < str.length(); i++)
		if (str[i] == ' ' && i != 0 && i != str.length() - 1)
			n++;

	if (str == " ")
		n = 0;
	
	cout << n;
}