#include <iostream>
using namespace std;

int main()
{
	int a;
	cin >> a;

	char Even[5] = "even";
	char Odd[4] = "odd";
	char Plus[5] = "plus";
	char Minus[6] = "minus";

	cout << ((a >= 0) ? Plus : Minus) << endl;
	cout << ((a % 2 == 0) ? Even : Odd) << endl;
}