#include <iostream>
using namespace std;

int main()
{
	int a, b, c;
	cin >> a >> b >> c;

	char Even[5] = "even";
	char Odd[4] = "odd";
	
	cout << ((a % 2 == 0) ? Even : Odd) << endl;
	cout << ((b % 2 == 0) ? Even : Odd) << endl;
	cout << ((c % 2 == 0) ? Even : Odd) << endl;
}