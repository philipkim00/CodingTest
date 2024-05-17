#include <iostream>
using namespace std;

int main()
{
	int a, b;
	cin >> a >> b;
	cout << a + b << endl << a - b << endl << a * b << endl << a / b << endl << a % b << endl; 
	
	cout << fixed;
	cout.precision(2);
	cout << (float)a / b << endl;
}