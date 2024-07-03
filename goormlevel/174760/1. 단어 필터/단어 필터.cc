#include <iostream>
using namespace std;
int main() {
	int a, b;
	string S, E;
	cin >> a >> b >> S >> E;
	
	while (E.find(S) != string::npos)
	{
		E.erase(E.find(S), S.size());
	}
	
	if (E == "")
		cout << "EMPTY";
	else
		cout << E;
}